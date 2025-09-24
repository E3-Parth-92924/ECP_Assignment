#include<stdio.h>

int main(){
    
    int year;

    enum month {Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    enum month m;
    printf("Enter Month 1-12 \n");
    scanf("%d",(int*)&m);
    printf("Enter year \n");
    scanf("%d",&year);

    
    switch(m){
               case 1:case 3:case 5:case 7:case 8:case 10:case 12:
               printf("No of Days : 31 Days \n");
               break;

               case 4:case 6:case 9:case 11:
               printf("No of Days : 30 Days \n");
               break;

               case 2: if((year % 400==0) || (year % 4==0 && year % 100!=0))
                        printf("No of Days : 29 and it is a leap year! \n");
                        else
                        printf("No of Days : 28 \n");
                        break;

               default : printf("Invalid Month entered!!!");
                        break;
               
        }
    return 0;

    }
