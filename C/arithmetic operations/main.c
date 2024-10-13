#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char ch;
    int n;
    char *operations[] = {
        "Addition", "Subtraction", "Multiplication", "Division", "Modulo",
        "Power", "Increment", "Decrement", "Negation", "Absolute", "All"};

    do {
        system("cls");

        printf("Available Operations:\n");
        for (int i = 0; i < 11; i++) {
            printf("%d. %s\n", i + 1, operations[i]);
        }

        int num1, num2;
        printf("\nEnter Number 1: ");
        scanf("%d", &num1);
        printf("\nEnter Number 2: ");
        scanf("%d", &num2);

        printf("\nEnter your Choice (1-11): ");
        scanf("%d", &n);

        float result,results[14] = {0};

        switch(n) {
            case 1:
                result = num1 + num2;
                printf("\nAddition: %d + %d = %.2f", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("\nSubtraction: %d - %d = %.2f", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("\nMultiplication: %d * %d = %.2f", num1, num2, result);
                break;
            case 4:
                if(num2 != 0) {
                    result = (float)num1 / num2;
                    printf("\nDivision: %d / %d = %.2f", num1, num2, result);
                } else {
                    printf("\nDivision by zero is not allowed.\n");
                }
                break;
            case 5:
                if(num2 != 0) {
                    result = num1 % num2;
                    printf("\nModulo: %d %% %d = %.2f", num1, num2, result);
                } else {
                    printf("\nModulo by zero is not allowed.\n");
                }
                break;
            case 6:
                result = pow(num1, num2);
                printf("\nPower: %d ^ %d = %.2f", num1, num2, result);
                break;
            case 7:
                result = ++num1;
                result = ++num2;
                printf("\nThe increments are %d and %d", (int)result, (int)result);
                break;
            case 8:
                result = --num1;
                result = --num2;
                printf("\nThe decrements are %d and %d", (int)result, (int)result);
                break;
            case 9:
                result = -num1;
                result = -num2;
                printf("\nThe negations are %d and %d", (int)result, (int)result);
                break;
            case 10:
                result = fabs(num1);
                result = fabs(num2);
                printf("\nThe absolutes are %.2f and %.2f", result, result);
                break;
            case 11:
                results[0] = num1 + num2;
                results[1] = num1 - num2;
                results[2] = num1 * num2;
                if (num2 != 0) {
                    results[3] = (float)num1 / num2;
                    results[4] = num1 % num2;
                }
                results[5] = pow(num1, num2);
                results[6] = ++num1;
                results[7] = ++num2;
                results[8] = --num1;
                results[9] = --num2;
                results[10] = -num1;
                results[11] = -num2;
                results[12] = fabs(num1);
                results[13] = fabs(num2);
                printf("\nResults of All Operations:\n");
                printf("Addition: %.2f\n", results[0]);
                printf("Subtraction: %.2f\n", results[1]);
                printf("Multiplication: %.2f\n", results[2]);
                if (num2 != 0) {
                    printf("Division: %.2f\n", results[3]);
                    printf("Modulo: %.2f\n", results[4]);
                }
                printf("Power: %.2f\n", results[5]);
                printf("Increment of num1: %.2f\n", results[6]);
                printf("Increment of num2: %.2f\n", results[7]);
                printf("Decrement of num1: %.2f\n", results[8]);
                printf("Decrement of num2: %.2f\n", results[9]);
                printf("Negation of num1: %.2f\n", results[10]);
                printf("Negation of num2: %.2f\n", results[11]);
                printf("Absolute of num1: %.2f\n", results[12]);
                printf("Absolute of num2: %.2f\n", results[13]);
                break;
            default:
                printf("\nInvalid choice\n");
        }

        printf("\n\nDo you want to continue? (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y');

    printf("Program terminated.\n");
    return 0;
}
