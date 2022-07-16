#include <stdio.h>
int QuickSort(int *, int, int);
int Partition(int *, int, int);
int main(int argc, char const *argv[])
{
    int a[] = {7, 6, 54, 3, 2, 1, 0};
    QuickSort(a, 0, 7);

    printf("After Sorting >>>\n");
    for (int i = 0; i < 7; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
    return 0;
}

int QuickSort(int a[], int start, int end)
{
    if (start < end)
    {
        int partitionIndex = Partition(a, start, end);
        QuickSort(a, start, partitionIndex - 1);
        QuickSort(a, partitionIndex + 1, end);
    }
}

int Partition(int a[], int start, int end)
{
    int pivot = a[end];
    int temp;
    int partitionIndex = start; // set partition index as start initially
    for (int i = start; i < end; i++)
    {
        if (a[i] <= pivot)
        {
            temp = a[i];
            a[i] = a[partitionIndex];
            a[partitionIndex] = temp;
            partitionIndex++;
        }
    }
    temp = a[end];
    a[end] = a[partitionIndex];
    a[partitionIndex] = temp;
    return partitionIndex;
}