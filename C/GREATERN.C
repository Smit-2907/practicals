#include<stdio.h>
#include<conio.h>
void main(){
	int a,b;
	clrscr();
	printf("Enter No 1:");
	scanf("%d",&a);
	printf("Enter No 2:");
	scanf("%d",&b);

	if(a<b){
	printf("B is bigger number");
	}else{
		printf("A is bigger number");
	}
	getch();

}