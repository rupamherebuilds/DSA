#include<stdio.h>

int main(){
    int a[10], size, temp;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("Enter the array element : ");
    for(int i =0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i =0; i< size-1; i++)
    {
        for(int j =0; j< size - i -1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Sorted array : ");
    for(int i =0 ; i < size; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}