#include <stdio.h>
#include <stdlib.h>
void number_without_iteration();
void number_with_iteration();
void right_triengle();
void whole_triengle_with_symbole();
void whole_triengle_with_numbers();

int main() {
    int row, choice;
    while (1) {
        printf("1. Print right-angled triangle with numbers without iterations\n");
        printf("2. Print right-angled triangle with numbers with iterations\n");
        printf("3. Print right-angled triangle with '*'\n");
        printf("4. Print whole triangle with '*'\n");
        printf("5. Print whole triangle with numbers\n");
        printf("6. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                number_without_iteration();
                break;
            case 2:
                number_with_iteration();
                break;
            case 3:
                right_triengle();
                break;
            case 4:
                whole_triengle_with_symbole();
                break;
            case 5:
                whole_triengle_with_numbers();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice! Please enter a number between 1 and 6.\n");
        }
    }
    return 0;
}

void number_without_iteration() {
    int i, j, num;
    printf("\nEnter The Number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}

void number_with_iteration() {
    int i, j, num;
    printf("\nEnter The Number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

void right_triengle() {
    int i, j, row;
    printf("Enter number for triangle: ");
    scanf("%d", &row);

    for (i = 0; i < row; i++) {
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void whole_triengle_with_symbole() {
    int i, j, n, space;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        for (j = i - 1; j >= 1; j--) {
            printf("* ");
        }
        printf("\n");
    }
}

void whole_triengle_with_numbers() {
    int i, j, n, space;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
