#include<stdio.h>

int main(){

    int  x,y;
    printf("Enter coordinates x & y \n");
    scanf("%d%d",&x,&y);

    if(x>0 && y>0){

        printf("Point lies in First Quadrant \n");

        }
    else if(x<0 && y>0){

        printf("Point lies in Second Quadrant \n");

        }
    else if(x<0 && y<0){

        printf("Point lies in Third Quadrant \n");

       }
    else if(x>0 && y<0){

        printf("Point lies in Fourth Quadrant \n");

        }
    else if(x==0 && y==0){

        printf("Point lies on Origin");

        }

    return 0;
    }
