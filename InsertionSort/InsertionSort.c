#include <stdio.h>

int main(int argc, char const *argv[])
{
    int temp, a[20], n, j;
    printf("How many Number Do you want to Sort...?(Max-20)\n");
    scanf("%d", &n);
    printf("Enter %d Numbers..:) \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Befor Sorting >>>\n");
    for (int i = 0; i < n; i++)
    {
        printf("[ %d ]", a[i]);
    }
    printf("\n");
    for (int i = 1; i < n; i++)
    {
        temp = a[i];
        for (j = i; j > 0 && temp < a[j - 1]; j--)
        {
            a[j] = a[j - 1];
        }
        a[j] = temp;
    }
    printf("After Sorting >>>\n");
    for (int i = 0; i < n; i++)
    {
        printf("[ %d ]", a[i]);
    }
    printf("\n");
    return 0;
}
