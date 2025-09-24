#include<stdio.h>

int main(){

    char ch;
    printf("Enter a character : \n");
    scanf("%c", &ch);
    printf("ASCII Code = %d\n", ch);

    if((ch>=65 && ch<=90) ||(ch>=97 && ch<=122))
    {
        

        if(ch>=65 && ch<=90){
                
            printf("Ch is Upper Case Alphabet \n");
            }
        else if(ch>=97 && ch<=122){

            printf("Ch is Lower Case Alphabet \n");
         
        }
        printf("Ch is a Alphabet \n");
       
   }
    else if(ch>=48 && ch<=57){

            printf("Ch is a Digit \n");
        }
    else if(ch== ' '){

            printf("Ch is a space (32) \n");
        }
    else if(ch== '\t'){

            printf("Ch is a Tab(9) \n");
        }
    else if(ch== '\r'){

            printf("Ch is Carriage Return(13) \n");
        }
    else if(ch== '\n'){

            printf("Ch is a New Line(10) \n");
        }
    else{

            printf("Not Listed above \n");
        }
     
    return 0;
    }
