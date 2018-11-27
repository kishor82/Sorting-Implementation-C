#include <stdio.h>

int main(int argc, char const *argv[])
{
    int temp, min, n, a[20];
    printf("How many Number Do you want to Sort...?(Max-20)\n");
    scanf("%d", &n);
    printf("Enter %d Numbers:..\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Before Sorting >>>\n");
    for (int i = 0; i < n; i++)
    {
        printf("[ %d ]", a[i]);
    }
    printf("\n");
    //Logic
    //select minimum element and replace it with the first element
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("After Sorting >>>\n");
    for (int i = 0; i < n; i++)
    {
        printf("[ %d ]", a[i]);
    }
    printf("\n");

    return 0;
}
