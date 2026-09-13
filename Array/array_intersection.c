#include <stdio.h>

int main()
{
    int a[10], b[10];
    int size1, size2, found;

    printf("Enter size of first array: ");
    scanf("%d", &size1);

    printf("Enter first array elements: ");
    for(int i = 0; i < size1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &size2);

    printf("Enter second array elements: ");
    for(int i = 0; i < size2; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("Intersection:\n");

    for(int i = 0; i < size1; i++)
    {
        found = 0;

        for(int j = 0; j < size2; j++)
        {
            if(a[i] == b[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 1)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}