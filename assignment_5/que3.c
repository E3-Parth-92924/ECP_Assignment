#include<stdio.h>

void accept_array(int ptr[],int n);
void print_array(int ptr[],int n);
void reverse_array(int ptr[],int n);

int main(void){
    int arr[5];
    int n=5;
    
    accept_array(arr,n);
    print_array(arr,n);
    reverse_array(arr,n);
    return 0;
    }


void accept_array(int ptr[],int n)
{
    printf("Enter elements:");
    for(int i=0;i<n;i++){
    scanf("%d",&ptr[i]);
        }
    }

void print_array(int ptr[],int n)
{
    printf("array:");
    for(int i=0;i<n;i++){
    printf("%4d",ptr[i]);
        }
    printf("\n");
    }

void reverse_array(int ptr[],int n)
{
    for(int i=n-1; i>=0; i--){
        printf("%4d", ptr[i]);
    }
    printf("\n");
    }
