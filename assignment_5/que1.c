#include<stdio.h>


float find_avg(float marks[],int length)
{
    float sum=0;
    for(int i=0;i<length;i++){
        sum=sum+marks[i];
        }
        return sum/length;

}

int main(void){
    float marks[5]={89.6f,57.5f,87.3f,95.8f,63.7f};
    //printf("avg : %f",find_avg(&marks[0],5));
    printf("avg : %f",find_avg(marks,5));
    }
