#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,num[100],sum = 0;
    printf("Enter number for odd number:");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i+=2){
        printf("%d\n",i);
        sum += i;
    }
    printf("%d",sum);
}
