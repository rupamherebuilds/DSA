#include <stdio.h>

int main()
{
    int a[10], b[10], c[20];
    int size1, size2, size3;

    printf("Enter size of first array: ");
    scanf("%d", &size1);

    printf("Enter first array elements: ");
    for(int i = 0; i < size1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &size2);

    printf("Enter second array elements: ");
    for(int i = 0; i < size2; i++)
    {
        scanf("%d", &b[i]);
    }

    size3 = size1 + size2;

    for(int i = 0; i < size1; i++)
    {
        c[i] = a[i];
    }

    for(int i = 0; i < size2; i++)
    {
        c[size1 + i] = b[i];
    }

    printf("Merged array:\n");
    for(int i = 0; i < size3; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}