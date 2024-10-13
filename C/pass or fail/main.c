#include <stdio.h>

int main() {
    char ch;
    int marks;
    do{
    system("cls");
    printf("Enter the marks obtained by the student (out of 100): ");
    scanf("%d", &marks);
     printf("\nGrading Table:\n");
    printf("--------------------------------------------------\n");
    printf("Marks Range        | Grade  | Result\n");
    printf("--------------------------------------------------\n");
    printf("90 - 100           | A      | Pass\n");
    printf("80 - 89            | B      | Pass\n");
    printf("70 - 79            | C      | Pass\n");
    printf("60 - 69            | D      | Pass\n");
    printf("50 - 59            | E      | Pass\n");
    printf("Below 50           | F      | Fail\n");
    printf("--------------------------------------------------\n");


    if (marks >= 90) {
        printf("Grade: A\n");
        printf("Result: Pass\n");
    } else if (marks >= 80) {
        printf("Grade: B\n");
        printf("Result: Pass\n");
    } else if (marks >= 70) {
        printf("Grade: C\n");
        printf("Result: Pass\n");
    } else if (marks >= 60) {
        printf("Grade: D\n");
        printf("Result: Pass\n");
    } else if (marks >= 50) {
        printf("Grade: E\n");
        printf("Result: Pass\n");
    } else {
        printf("Grade: F\n");
        printf("Result: Fail\n");
    }

    printf("Do you want to continue(y/n):");
    scanf(" %c",&ch);
    } while(ch == 'y');
    printf("Program Terminating.......");
    return 0;
}
