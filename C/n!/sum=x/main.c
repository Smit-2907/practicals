#include <stdio.h>

int main() {
    int ch;
    printf("Enter 1. to find factors of the number \n");
    printf("Enter 2. to find factorial of the number \n");
    scanf("%d",&ch);
    switch(ch){
    case 1:
        fectors();
    break;
    case 2:
        factorial();
    }
}
void fectors(){
        int num, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
}
void factorial(){
    int num,i,fact=0;
    printf("Enter Number to generate the fectorial :");
    scanf("%d",&num);
    for(i = 1;i <= num; i++){
        fact *= i;
    }
    printf("%d",fact);
}
