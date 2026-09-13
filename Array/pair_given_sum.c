#include <stdio.h>

int main()
{
    int a[10], size, sum, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the required sum: ");
    scanf("%d", &sum);

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(a[i] + a[j] == sum)
            {
                printf("Pair: %d + %d = %d\n",
                       a[i], a[j], sum);

                found = 1;
            }
        }
    }

    if(found == 0)
    {
        printf("No pair found.\n");
    }

    return 0;
}