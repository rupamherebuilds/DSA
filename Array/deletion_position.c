#include<stdio.h>

int main()
{
    int a[10], size, index;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("Enter the array elements : ");
    for(int i =0; i< size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the elements index number you want to delete : ");
    scanf("%d", &index);
    for(int i =size; i< index; i++)
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