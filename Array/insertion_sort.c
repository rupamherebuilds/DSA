#include <stdio.h>

int main()
{
    int a[10], size, key, j;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 1; i < size; i++)
    {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    printf("Sorted array:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}