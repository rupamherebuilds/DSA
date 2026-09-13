#include<stdio.h>

int main()
{
    int a[10], size, temp;
    printf("Enter the size of the array :");
    scanf("%d", &size);

    printf("Enter the array elements : ");
    for(int i =0; i< size; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i =0; i < size/2; i++)
    {
        temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1- i] = temp;
    }

    printf("Array after reversal : ");
    for(int i =0 ; i< size; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}