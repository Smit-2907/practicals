#include <stdio.h>
#include <stdlib.h>

int count = 0;  // To count the number of students who fail

char getGrade(float per) {
    if (per >= 90)
        return 'O';  // Outstanding
    else if (per >= 80)
        return 'A';
    else if (per >= 70)
        return 'B';
    else if (per >= 60)
        return 'C';
    else
        return 'F';  // Fail
}

int main() {
    int n = 0;
    char ch;

    do {
        system("cls");

        printf("\nEnter how many Marksheet(s) you want to make: ");
        scanf("%d", &n);
        getchar();  // To consume newline character left by scanf

        for (int i = 1; i <= n; i++) {
            char sname[50], subjects[10][100];
            float per;
            int marks[10], sum = 0, eno, num_subjects, failed = 0;

            // Data input
            printf("\n*********************************************************************************************************************\n");
            printf("\nEnter name for Student %d: ", i);
            fgets(sname, sizeof(sname), stdin);

            printf("\nNOTE:- Enrollment number must be an Integer.");
            printf("\nEnter student enrollment number for student %d: ", i);
            scanf("%d", &eno);

            printf("\nNOTE:- Enter how many subjects you want to enter: ");
            scanf("%d", &num_subjects);
            getchar();
            printf("\n****************************************************************************");
            printf("\n\tEnter Subjects\n");

            for (int j = 0; j < num_subjects; j++) {
                printf("\nEnter Subject name: ");
                fgets(subjects[j], sizeof(subjects[j]), stdin);
                subjects[j][strcspn(subjects[j], "\n")] = '\0';
            }
            printf("\n****************************************************************************");
            printf("\nEnter Marks\n");
            for (int k = 0; k < num_subjects; k++) {
                printf("\n\tEnter Marks for %s: ", subjects[k]);
                scanf("%d", &marks[k]);
                if (marks[k] < 50) {
                    failed = 1;
                }
                sum += marks[k];
            }

            // Calculation
            per = (float)sum / num_subjects;  // Calculate percentage

            // Check if the student failed any subject
            if (failed) {
                printf("\nStudent Name: %s", sname);
                printf("\nStudent Enrollment Number: %d", eno);
                printf("\n-------------Marks----------------\n");

                for (int j = 0; j < num_subjects; j++) {
                    printf("\n\t%s: %d \t", subjects[j], marks[j]);
                }
                printf("\nTotal Marks Obtained: %d", sum);
                printf("\tPercentage: %.2f%%", per);
                printf("\tGrade: F (Failed)\n");
                count++;  // Increment failure count
            } else {
                char grade = getGrade(per);  // Get the grade based on percentage

                // Display
                printf("\nStudent Name: %s", sname);
                printf("\nStudent Enrollment Number: %d", eno);
                printf("\n-------------Marks----------------\n");

                for (int j = 0; j < num_subjects; j++) {
                    printf("\n\t%s: %d \t", subjects[j], marks[j]);
                }
                printf("\nTotal Marks Obtained: %d", sum);
                printf("\tPercentage: %.2f%%", per);
                printf("\tGrade: %c\n", grade);
            }

            getchar();  // Pause for a moment after each student
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &ch);

    } while (ch == 'y');

    printf("\nTotal number of students who failed: %d\n", count);
    printf("Program terminated.\n");
    return 0;
}
