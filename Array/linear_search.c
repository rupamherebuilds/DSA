#include<stdio.h>

int main()
{
    int a[10], size, element, found =0;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("Enter the array elements : ");
    for(int i =0; i< size; i++)
    {
        scanf ("%d", &a[i]);
    }

    printf("Enter the element you want to search : ");
    scanf("%d", &element);

    for(int i =0; i< size; i++)
    {
        if(a[i]== element)
        {
            printf("Element found at position : %d\n" , i);
            found =1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Element not found!!");
    }
    return 0;
}
