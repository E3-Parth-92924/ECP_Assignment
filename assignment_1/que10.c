#include<stdio.h>
#include<math.h>

int main(){



float a,b,c;
printf("Enter sides of triangle to calculate area and perimeter : ");
scanf("%f%f%f",&a,&b,&c);

float perimeter = a+b+c;
float s = (perimeter/2);
float area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("perimeter of triangle : %f  \n",perimeter);
printf("area of triangle : %f \n",area);
 









return 0;
    }
