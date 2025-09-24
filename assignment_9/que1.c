#include<stdio.h>

    char str[128] = "I am aryan bharaswadkar" ;
    int main(){
            FILE *fp = fopen("file1.txt","r");
            printf("File conetent:\n");
            for(int i = 0 ; str[i] != '\0' ; i++)
		    fgetc(str[i], fp);  
              
                printf("\n");
                fclose(fp);
                return 0;

        }
