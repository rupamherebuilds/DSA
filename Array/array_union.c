#include <stdio.h>

int main()
{
    int a[10], b[10], c[20];
    int size1, size2, size3 = 0;
    int found;

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

    for(int i = 0; i < size1; i++)
    {
        c[size3++] = a[i];
    }

    for(int i = 0; i < size2; i++)
    {
        found = 0;

        for(int j = 0; j < size3; j++)
        {
            if(b[i] == c[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            c[size3++] = b[i];
        }
    }

    printf("Union:\n");
    for(int i = 0; i < size3; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}