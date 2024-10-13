#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice;
    do {
    system("cls");
        int ch;
        printf("The week starts with 1 = Sunday");
        printf("\nEnter a number to get your day (1-7):");
        scanf("%d", &ch);

        switch(ch) {
            case 1: printf("Sunday\n");    break;
            case 2: printf("Monday\n");    break;
            case 3: printf("Tuesday\n");   break;
            case 4: printf("Wednesday\n"); break;
            case 5: printf("Thursday\n");  break;
            case 6: printf("Friday\n");    break;
            case 7: printf("Saturday\n");  break;
            default: printf("Invalid choice\n"); break;
        }
        printf("Do you want to continue? (y/n):");
        scanf(" %c", &choice);
    }
    while (choice == 'y');
    printf("Program terminated.\n");

    void cal(){
        char week[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
        printf("-----------------------------Week----------------------------------------");
        for(int i = 0; week[i] < 7; i++){
            printf("%d",i);
                //a
        }
    }


    return 0;

}
