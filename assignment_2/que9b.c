#include <stdio.h>

int main() {
    int month, year;
    printf("Enter month (1 to 12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    if (month == 2) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            printf("February %d has 29 days & its a leap year \n", year);
        else
            printf("February %d has 28 days\n", year);
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || 
             month == 8 || month == 10 || month == 12) {
        printf("%d month of year %d has 31 days\n", month, year);
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf(" %d month of year %d has 30 days\n", month, year);
    }
    else {
        printf("Invalid month!\n");
    }

    return 0;
}

