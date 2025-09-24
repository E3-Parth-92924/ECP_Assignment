#include<stdio.h>
void copyFILElbl(FILE *src,FILE *dest)
{
    char line[200];
    while(fgets(line,sizeof(line),src) !=NULL){
    fputc(line,dest);
    printf("%s",line);
        }
}

int main(){
    
    FILE *fp1 = fopen("source.txt","r");
    if(fp1==NULL)
    {   
        printf("Error");
        return 1;
    
        }
    FILE *fp2 =fopen("dest.txt","w");
    if(fp2==NULL)
    {   
        printf("Error");
        return 1;
    
        }
    copyFILElbl(fp1,fp2);
    fclose(fp1);
    fclose(fp2);

    printf("Copied!");
    return 0;
    }

