#include <stdio.h>

int main()
{
    int a[10], size, min, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < size - 1; i++)
    {
        min = i;

        for(int j = i + 1; j < size; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Sorted array:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}