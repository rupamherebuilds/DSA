#include<stdio.h>

int main()
{
    int a[10], size, element, index;
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
    printf("Enter the index position you want to insert the element at : ");
    scanf("%d", &index);

    printf("Enter the element you want to insert: ");
    scanf("%d", &element);
    for(int i = size; i > index; i--)
    {
        a[i] = a[i - 1];
    }

    a[index] = element;
    size++;

    printf("Array after inertion :");
    for(int i =0 ; i< size; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}