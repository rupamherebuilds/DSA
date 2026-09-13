#include<stdio.h>

int main()
{
    int a[10], size, element;
    printf("Enter the size : ");
    scanf("%d", &size);

    printf("Enter the array elements : ");
    for(int i =0; i< size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array before insertion : ");
    for(int i =0 ; i< size; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("Enter the element you want to insert at the end : ");
    scanf("%d", &element);
    a[size] = element;
    size++;

    printf("Array after insertion : ");
    for(int i =0; i< size; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
    return 0;
}