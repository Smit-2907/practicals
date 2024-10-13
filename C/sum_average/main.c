#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],i,n,sum=0;
    float avg;
    for(i=1;i<=10;i++){
        printf("Enter the Element %d :",i);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("Sum of elements = : %d",sum);
    avg=sum/10;
    printf("Average = : %f",avg);


    return 0;
}
