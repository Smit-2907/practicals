#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,i,j,tempsum,sum=0;
    printf("Enter value for calculation:");
    scanf("%d",&n);
    for(i = 1;i <= n; i++){
        printf("(");    //opening para
        tempsum = 0;
        for(j = 1;j <= i; j++){
            tempsum += j;
            if(j == i){
                printf("%d",j); //print last number(last digit does not contain "x")
                }else{
                printf("%d+",j);    //print following digits with "+"
            }
        }
        printf(")");    //closing para
         if (i != n) {
            printf(" + "); //Print "+" between terms
        }
        sum += tempsum; //add temp sum to total sum
    }
    printf("\n The sum of this series is : %d",sum);    //print total sum
}
