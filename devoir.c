#include <stdio.h>
#include <stdbool.h>

int main() {

    int day;
    int month;
    int year;

    while (true) {

        // 
        printf("\nPlease enter a date with the '/' as a separator (D/M/Y): ");
        scanf("%d /%d /%d", &day, &month, &year);
        printf("You choose the date : %d/%d/%d\n", day, month, year);
        printf("\nChecking if your date is valid...\n");

    
        //Previous checks
        if ( year < 1600 ) {
            printf("Your date is invalid because of the year. Please try again.\n");
            continue;
        }
        else if ( month < 1 || month > 12 ) {
            printf("Your date is invalid because of the month. Please try again.\n");
            continue;
        }
        else if ( day < 1 || day > 31 ) {
            printf("Your date is invalid because of the day. Please try again.\n");
            continue;
        }


        //Leap year check
        if ( month == 2 ) {
            if ( ( year%4 == 0 && year%100 != 0 ) || year%400 == 0 ) {
                if ( day > 29 ) {
                    printf("Your date is invalid because of the day. Please try again.\n");
                    continue;
                }

            }
            else {
                if ( day > 28 ) {
                    printf("Your date is invalid because of the day. Please try again.\n");
                    continue;
                }
            }         
        }

        printf("Your date %d/%d/%d is valid.\n", day, month, year);
        break;
    }

    return 0;
}