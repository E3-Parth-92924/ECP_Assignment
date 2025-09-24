#include<stdio.h>
void copyFILElbl(FILE *src,FILE *dest)
{
    char line[200];
    while(fgets(line,sizeof(line),src) !=NULL){
    fputs(line,dest);
    printf("%s",line);
        }
}

int main(int argc,char *argv[]){
    
    if(argc!=3)
    {
        printf("%s src dest",argv[0]);
        return 1;
        }
    FILE *fp1 = fopen(argv[1],"r");
    if(fp1==NULL)
    {   
        printf("Error");
        return 1;
    
        }
    FILE *fp2 =fopen(argv[2],"w");
    if(fp2==NULL)
    {   
        printf("Error");
        fclose(fp1);
        return 1;
    
        }

    printf("%s to %s copying",argv[1],argv[2]);
    copyFILElbl(fp1,fp2);
    fclose(fp1);
    fclose(fp2);

    printf("Copied!");
    return 0;
    }

