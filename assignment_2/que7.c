#include<stdio.h>

int main(){

//a)Using if else
    int year;
    printf("Enter year \n");
    scanf("%d",&year);

    if(year % 400 == 0){

        printf("Year is leap year \n");
        

        }
     else if (year % 100 == 0){

        printf("Year is not a leap year \n");

         }
     else if (year % 4 == 0){
            
        printf("Year is leap year \n");

         }
      else{

           printf("Year is not a leap year \n");

          }


//b)Using logical operator
       

    if(year %400 == 0 || year %4 == 0){
            
           printf("Year is leap year \n");


        }
     else if(year %100 == 0){

            printf("Year is not leap year \n");
            

         }

      else{

            printf("Year is not a leap year \n");

          }
     
//c)Using Conditional oeperator

        
        int year1;                                                                                                                
        printf("Enter another year \n");
        scanf("%d",&year1);
        if ((year1 % 400 == 0) || (year1 % 4 == 0 && year1 % 100 != 0)) {
        printf("Leap Year\n");
        }

        else {
        printf("Not a Leap Year\n");
    }





    return 0;
    }
