#include<stdio.h>

int main(){

    int Emp_id;
    int Dept_no;
    char Desg;
    printf("Enter Emp Id no \n");
    scanf("%d",&Emp_id);
    printf("Enter Dept no \n");
    scanf("%d",&Dept_no);
    printf("Enter Desg of Emp \n");
    scanf("%*c%c",&Desg);

    printf("Employee with employee id %d  is working in ",Emp_id);

   
    switch (Dept_no){

        case 10 : printf("Marketing ");
                  break;
        case 20 : printf("Management ");
                  break;
        case 30 : printf("Sales ");
                  break;
        case 40 : printf("Designing ");
                  break;
        default : printf("Wrong Dept No ");
                  break;

        }
    printf("Department as ");
     switch (Desg){

        case 'M' : printf("Manager \n");
                  break;
        case 'S' : printf("Supervisor \n");
                  break;
        case 's' : printf("Security Officer \n");
                  break;
        case 'C' : printf("Clerk \n");
                  break;
        default : printf("Wrong Desg Code \n");
                  break;
        }
    return 0;
    }
