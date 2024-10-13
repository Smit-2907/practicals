#include<stdio.h>

int main(){
	int n,i,j;
	printf("Enter number for table:- ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		for(j=1;j<=n;j++){
			printf("\t%d * %d = %d",j,i,i*j);
		}printf("\n");
	}
	return 0;
}
