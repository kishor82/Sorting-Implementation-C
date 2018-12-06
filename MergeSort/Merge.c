#include <stdio.h>
int MergeSort(int *, int, int);
void merger(int *, int, int, int);
int main(int argc, char const *argv[])
{
    int a[20], n, l, h;
    printf("How many Numbers do you want to sort :\n");
    scanf("%d", &n);
    h = n - 1;
    printf("after n :h-1: %d \n", h);
    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    MergeSort(a, l, h);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
int MergeSort(int a[], int l, int h)
{
    printf("value of l:%d\n..", l);
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        MergeSort(a, l, mid);
        MergeSort(a, mid + 1, h);
        merger(a, l, mid, h);
    }
    return 0;
}
void merger(int a[], int l, int m, int h)
{
    int b[20], r1, r2, i;
    r1 = l;
    r2 = m + 1;
    i = l;
    while (r1 <= m & r2 <= h)
    {
        if (a[r1] < a[r2])
        {
            b[i] = a[r1];
            r1++;
            i++;
        }
        else
        {
            b[i] = a[r2];
            r2++;
            i++;
        }
    }
    while (r1 <= m)
    {
        b[i] = a[r1];
        r1++;
        i++;
    }
    while (r2 <= h)
    {
        b[i] = a[r2];
        r2++;
        i++;
    }
    for (int j = l; j < i; j++)
    {
        a[j] = b[j];
    }
}
