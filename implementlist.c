#include <stdio.h>
// implementing the functions...
void create(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d", arr[i]);
}

int main()
{
    int arr[5];
    printf("enter the elements of array\n");
    create(arr, 5);
    printf("the five no. in the array list are:\n");
    display(arr, 5);
    return 0;
}