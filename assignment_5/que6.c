#include <stdio.h>

int removeDuplicates(int arr[], int n)
{
    if(n == 0)
	 return 0;
    int temp[n];
    int j = 0;
    for(int i = 0; i < n; i++)
 {
        int found = 0;
        for(int k = 0; k < j; k++)
 {
            if(arr[i] == temp[k])
 {
                found = 1;
                break;
  }
  }
        if(!found)
 {
            temp[j++] = arr[i];
        }
    }
    for(int i = 0; i < j; i++)
 {
        arr[i] = temp[i];
    }
    return j; // new size
}

int main()
 {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    n = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\nTotal unique elements = %d\n", n);

    return 0;
}

