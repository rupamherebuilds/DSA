#include<stdio.h>

int main()
{
    int a[10], size, element;
    int low, mid, high, found =0;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("Enter the sorted array elements : ");
    for(int i =0; i< size; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the element you want to search : ");
    scanf("%d", &element);

    low = 0;
    high = size -1;

    while(low <= high)
    {
        mid = (low + high)/2;
        if(a[mid]== element)
        {
            printf("Element found at index %d\n", mid);
            found =1;
            break;
        }
        else if(a[mid]< element)
        {
            low = mid +1;
        }
        else
        {
            high = mid -1;
        }
    }
    if(found == 0)
    {
        printf("Element not found!!");
    }
    return 0;
}