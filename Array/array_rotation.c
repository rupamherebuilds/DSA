#include <stdio.h>

int main()
{
    int a[10], size, rotations, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number of left rotations: ");
    scanf("%d", &rotations);

    rotations = rotations % size;

    for(int r = 0; r < rotations; r++)
    {
        temp = a[0];

        for(int i = 0; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }

        a[size - 1] = temp;
    }

    printf("Array after rotation:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}