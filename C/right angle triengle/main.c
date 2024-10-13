#include <stdio.h>

int main()
{
    int row;
    printf("Enter number for try-angle:");
    scanf("%d",&row);
    for(int i=0; i<row; i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }printf("\n");
    }
}
