#include<stdio.h>
#include<conio.h>

void stddtl(){
	char stdnm[50], eno[10];
	int cno[10];

	printf("\n Enter Student Name:");
	scanf("%s",&stdnm);

	printf("\n Enter Enrollment number:");
	scanf("%f",&eno);

	printf("\n Enter Mobile number:");
	scanf("%d",&cno);
}
void students(){
stddtl();
}
void main(){
	clrscr();

	stddtl();
	getch();
}