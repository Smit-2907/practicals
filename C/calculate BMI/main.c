#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    do {
        system("cls");
        float height, weight, bmi;
        printf("\nEnter the Height (In Centimeters): ");
        scanf("%f", &height);
        printf("\nEnter the Weight (In KGs): ");
        scanf("%f", &weight);

        height = height * 0.01;

        bmi = weight / (height * height);

        printf("\nYour BMI is: %.2f\n", bmi);

        if (bmi < 18.5) {
            printf("Category: Underweight\n");
        } else if (bmi >= 18.5 && bmi < 24.9) {
            printf("Category: Normal weight\n");
        } else if (bmi >= 25 && bmi < 29.9) {
            printf("Category: Overweight\n");
        } else {
            printf("Category: Obese\n");
        }

        printf("\nBMI Classification Table:\n");
        printf("BMI Range   \t  | Category\n");
        printf("------------------|----------------\n");
        printf("Below 18.5  \t| Underweight\n");
        printf("18.5 - 24.9 \t| Normal weight\n");
        printf("25 - 29.9   \t| Overweight\n");
        printf("30 and above\t| Obese\n");

        printf("\nDo you want to continue (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y');

    printf("Program Terminating...\n");
    return 0;
}
