#include<stdio.h>

int main()
{
    int a[10], size, element;
    printf("Enter the size of the array :");
    scanf("%d", &size);

    printf("Enter the array elements : ");
    for(int i = 0; i< size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements before insertion : ");
    for(int i =0; i< size; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("Enter the element you want to insert at the beginning : ");
    scanf("%d", &element);
    for(int i = size; i > 0; i--)
    {
        a[i]= a[i-1];
    }
    a[0] = element;
    size++;

    printf("Array after insertion : ");
    for(int i =0; i< size; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}