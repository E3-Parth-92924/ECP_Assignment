#include<stdio.h>

int main(){

    int quantity;
    printf("Enter the quntity \n");
    scanf("%d",&quantity);
    int Total_price = quantity * 5;
 
    float discount;
    float final_price;

    if(quantity > 50){
    
        printf("Apply 15%% discount \n");
        
        
        float final_price = Total_price * (1-0.15);

        printf("final price %.2f \n ",final_price);

        }
    else if(quantity > 30 && quantity <=50){

        float final_price = Total_price * (1-0.1);

        printf("final_price %.2f \n ",final_price);


        }
     else{

        final_price = Total_price;
        printf("final_price %.2f \n",final_price);
        

         }

   
    return 0;

    }
