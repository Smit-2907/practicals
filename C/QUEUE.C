#include<stdio.h>
#include<conio.h>
#define max 100
int front = -1, rear = -1;
int queue[max];
int isEmpty(){
	if(front == -1){
	 return 1;
	}
	return 0;
}
int isFull(){
	if(rear == max - 1){
	return 1;
	}
	return 0;
}
void enqueue(){
int data;
	if(isFull()){
		printf("\n Queue is Full");
	}else{
	if(front == -1)
	       front = 0;
	printf("\n Enter the value to enter in queue:");
	scanf("%d",&data);
		rear++;
		queue[rear] = data;

	}
}

void dequeue(){
	if(isEmpty()){
	       printf("Queue is Empty");
	}else{
	printf("\n %d is deleted from queue",queue[front]);
	front++;
	}

}

void show(){
int i;
if(isEmpty()){
	printf("\n Queue is empty");
}else{
	printf("\n Empty Queue\n");
	for(i = front ; i <= rear; i++){
		printf("%d\n",queue[i]);
	}
}
}

void main(){
int ch;
clrscr();
while(1){
	printf("\n1.Insert in queue");
	printf("\n2.Delete from queue");
	printf("\n3.show");
	printf("\n4.Exit");
	printf("\nEnter choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
		enqueue();
		break;
		case 2:
		dequeue();
		break;
		case 3:
		show();
		break;
		case 4:
		exit();
		break;
		default:
		printf("Invalid choice......");
		break;
	}
}
getch();
}
