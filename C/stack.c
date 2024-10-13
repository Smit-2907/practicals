#include<stdio.h>
#include<conio.h>
int top = -1;
#define max 7
int stack[max];

int isfull(){
    if(top == max){
	   printf("Stack is full");
	   return 1;
	   }
    return 0;
}
int isempty(){
    if(top == -1){
	printf("Stack is underflow");
	return 1;
    }
    return 0;
}
void push(){
    if(isfull()){
    int a,data;
    printf("\n Enter Element:");{
    scanf("%d",&data);
    }
		top++;
		stack[top] = data;
		printf("%d is pushed into stack",data);
		}
}
void pop(){
	if(isempty()){
		printf("\n There is nothing to pop");
	}else{
		int n;
		n = stack[top];
		top--;
		printf("\n%c is popped out of stack",n);
	}
}
void show(){
	if(isempty()){
	int i;
		printf("\n Elemnts present in stack");
		for(i = 0; i>=0;i--){
		printf("%d\n",stack[i]);
		}
	}
}

void main(){

     int ch,i;
     clrscr();

     printf("\n1.To Enter Element");
     printf("\n2.To Delete Element");
     printf("\n3.To Show Elements");
     printf("\n Enter Choice");
     scanf("%d",&ch);

     switch(ch){
	case 1:
	push();
	break;

	case 2:
	pop();
	break;
     }


     getch();
}