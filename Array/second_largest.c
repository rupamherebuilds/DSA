#include <stdio.h>
#include <limits.h>

int main()
{
    int a[10], size;
    int largest, second;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = INT_MIN;
    second = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    if(second == INT_MIN)
    {
        printf("Second largest element does not exist.\n");
    }
    else
    {
        printf("Second largest = %d\n", second);
    }

    return 0;
}