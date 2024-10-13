#include <stdio.h>
#include <conio.h>

//to calculate percentage
float calculateGPA(float percentage) {
    return percentage / 10.0;
}
// To determine the grade based on percentage
char calculateGrade(float percentage) {
    if (percentage >= 90) {
        return 'A';
    } else if (percentage >= 80) {
        return 'B';
    } else if (percentage >= 70) {
        return 'C';
    } else if (percentage >= 60) {
        return 'D';
    } else if (percentage >= 50) {
        return 'E';
    } else {
        return 'F';
    }
}

//to input and calculate
void createMarksheet() {
    int i, marks[5], contact[10];
    char name[50], enrollment[15];
    float total = 0, percentage, gpa;
    char choice;

    printf("\nEnter Student Name: ");
    scanf("%s", name);
    printf("Enter Enrollment Number: ");
    scanf("%s", enrollment);
    printf("Enter Contact Number: ");
    scanf("%d", contact);

    printf("\nEnter marks for the following subjects:\n");
    printf("Discrete Math: ");
    scanf("%d", &marks[0]);
    printf("Programming in C: ");
    scanf("%d", &marks[1]);
    printf("Python Programming: ");
    scanf("%d", &marks[2]);
    printf("Data Structure and Algorithm: ");
    scanf("%d", &marks[3]);
    printf("DBMS: ");
    scanf("%d", &marks[4]);

    // Calculate total & percentage
    for( i = 0; i < 5; i++) {
	total += marks[i];
    }
    percentage = total / 5;
    gpa = calculateGPA(percentage);

    // Display
    printf("\n--- Marksheet ---\n");
    printf("\nName: %s", name);
    printf("\nEnrollment Number: %s", enrollment);
    printf("\nContact Number: %s", contact);
    printf("\nDiscrete Math: %d", marks[0]);
    printf("\nProgramming in C: %d", marks[1]);
    printf("\nPython Programming: %d", marks[2]);
    printf("\nData Structure and Algorithm: %d", marks[3]);
    printf("\nDBMS: %d", marks[4]);
    printf("\nTotal Marks: %d", total);
    printf("\nPercentage: %.2f%%", percentage);
    printf("\nGPA: %.2f", gpa);
    printf("\nGrade: %c", grade);

    // Ask if the user wants to continue
    printf("\nDo you want to create another marksheet? (y/n): ");
    choice = getch(); // Using getch() to capture the user input without waiting for Enter

    if(choice == 'y' || choice == 'Y') {
	printf("\n");
	createMarksheet(); // Recursive call to repeat the process
    } else {
	printf("\nTerminating the program...\n");
    }
}

void main() {
    clrscr(); // Clear the screen (optional)
    createMarksheet();
    getch(); // Pause the program before exiting
}
