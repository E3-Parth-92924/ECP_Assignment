#include <stdio.h>

int* linearSearchAddr(int arr[], int n, int key) 
{
    for(int i = 0; i < n; i++)
{
        if(arr[i] == key)
            return &arr[i];
  }
    return NULL;
}

int main()
{
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int *ptr = linearSearchAddr(arr, n, key);
    if(ptr != NULL)
        printf("Element found at address %p with value %d\n", (void*)ptr, *ptr);
    else
        printf("Element not found\n");

    return 0;
}

