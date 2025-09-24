#include <stdio.h>

void acceptArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
 {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void maxMin(int arr[], int n, int *max, int *min)
 {
    *max = *min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > *max) *max = arr[i];
        if(arr[i] < *min) *min = arr[i];
    }
}

int main() 
{
    int n, max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    acceptArray(arr, n);

    maxMin(arr, n, &max, &min);

    printf("Maximum = %d, Minimum = %d\n", max, min);

    return 0;
}

