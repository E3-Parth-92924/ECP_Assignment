#include <stdio.h>

void acceptArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
   {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

int maxArray(int arr[], int n) 
{
    int max = arr[0];
    for(int i = 1; i < n; i++) 
{
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int minArray(int arr[], int n)
{
    int min = arr[0];
    for(int i = 1; i < n; i++)
 {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
 {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    acceptArray(arr, n);

    printf("Maximum = %d\n", maxArray(arr, n));
    printf("Minimum = %d\n", minArray(arr, n));

    return 0;
}

