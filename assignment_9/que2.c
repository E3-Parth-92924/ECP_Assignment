#include<stdio.h>
void copyFile(FILE *src,FILE *dest)
{
    char ch;
    while((ch=fgetc(src)) !=EOF){
    fputc(ch,dest);
    putchar(ch);
        }
}

int main(){
    char userData[100];
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
    copyFile(fp1,fp2);
    fclose(fp1);
    fclose(fp2);

    fp2 = fopen("dest.txt","a");
    if(fp2==NULL)
    {   
        printf("Error");
        return 1;
    
        }

    printf("Enter data to append in dest");
    getchar();
    fgets(userData,sizeof(userData),stdin);
    fputs(userData,fp2);
    fclose(fp2);
    printf("appended!");
    return  0;
    }

