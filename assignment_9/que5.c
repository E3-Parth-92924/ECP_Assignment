//Write a function to write student’s record to a text file using formatted I/O. i.e. fprintf. Write
//another function to read student’s record from a text file using formatted I/O. i.e. fscanf.
#include<stdio.h>

    struct student{
                int rollno;
                char name[20];
                float marks;
        };


void write_student()
{   
    struct student s;
    printf("Enter rollno,name,marks");
    scanf("%d %s %f",&s.rollno,s.name,&s.marks);
    FILE *fp = fopen("file.txt","w");
    if(fp==NULL)
    {
        printf("Error!");
        return;
        }
    fprintf(fp,"%d %s %.2f\n",s.rollno,s.name,s.marks);

    fclose(fp);
    printf("Record Written");

}
   

void read_student()
{
    struct student s;
  
      FILE *fp = fopen("file.txt","r");
      if(fp==NULL)
      {
          printf("Error!");
          return;
          }
      fscanf(fp,"%d %s %.2f\n",&s.rollno,s.name,&s.marks);
      printf("student record form file");
      printf("%d %s %.2f",s.rollno,s.name,s.marks);
      fclose(fp);

    }


int main(){
      
      write_student();
      read_student();
      return 0;


    }
