#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10], temp, n;
    printf("How Many Numbers Do you Want to Sort....(Min-10)\n");
    scanf("%d", &n);
    printf("Plz Enter %d Numbers :)\n ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    //Outer Loop is for passes
    //There will be (n-1) passes for n inputs
    for (int i = 1; i < n; i++)
    {
        //Inner loop is for Iteration in one pass
        //Number of Iteration will be (n-iteration_number) or (n-i) here.
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                //temp is for swapping if condition holds true.
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");

    return 0;
}
