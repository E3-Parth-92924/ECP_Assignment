//Using if else 
#include <stdio.h>

int main() {
    int month, year;
    printf("Enter month (1 to 12) : ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    if (month == 1)
        printf("January %d has 31 days\n", year);
    else if (month == 2) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            printf("February %d = 29 days & its a leap year \n", year);
        else
            printf("February %d = 28 days\n", year);
    }
    else if (month == 3)
        printf("March %d = 31 days\n", year);
    else if (month == 4)
        printf("April %d = 30 days\n", year);
    else if (month == 5)
        printf("May %d = 31 days\n", year);
    else if (month == 6)
        printf("June %d = 30 days\n", year);
    else if (month == 7)
        printf("July %d = 31 days\n", year);
    else if (month == 8)
        printf("August %d = 31 days\n", year);
    else if (month == 9)
        printf("September %d = 30 days\n", year);
    else if (month == 10)
        printf("October %d = 31 days\n", year);
    else if (month == 11)
        printf("November %d = 30 days\n", year);
    else if (month == 12)
        printf("December %d = 31 days\n", year);
    else
        printf("Invalid month !!\n");

    return 0;
}

