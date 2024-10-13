#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    int n;

    do {
        system("cls");

        char *week[] = {
            "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
        };
        printf("-----------------------------Week----------------------------------------\n");
        for (int i = 0; i < 7; i++) {
            printf("%d. %s\n", i + 1, week[i]);
        }
        printf("Enter the day number (1-7): ");
        scanf("%d", &n);

        while (getchar() != '\n');

        if (n >= 1 && n <= 7) {
            if (n == 1 || n == 7) {
                printf("\n%s is a Weekend.\n", week[n - 1]);
            } else {
                printf("\n%s is a Weekday.\n", week[n - 1]);
            }
        } else {
            printf("\nInvalid Choice. Please enter a number between 1 and 7.\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &ch);

        while (getchar() != '\n');

    } while (ch == 'y');

    printf("\nProgram Terminating.......\n");
    return 0;
}
