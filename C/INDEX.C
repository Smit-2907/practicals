#include<stdio.h>
	int top,stack;
	isFull(){
	if(top == stack){
			printf("Stack if full");
			return 0;
		}else{
			return 1;
		}
	}
void main(){
	clrscr();
	ifFull();
	getch();
}