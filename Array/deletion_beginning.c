#include<stdio.h>

int main()
{
    int a[10], size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("Enter the array elements : ");
    for(int i =0; i< size; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0; i< size-1; i++)
    {
        a[i] = a[i+1];
    }

    size--;

    printf("Array elements after deletion :");
    for(int i =0; i< size; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
    
}