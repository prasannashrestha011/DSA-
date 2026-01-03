#include<stdio.h>
#define SIZE 5

int arr[SIZE];
int front=-1;
int rear=-1;

void enqueue(int data){
    if(rear==SIZE-1){
        printf("Queue overflowed");
        return;
    }
    if(front==-1){
        front=0;
    }
    rear++;
    arr[rear]=data;
}
void dequeue(){
    if(front>rear || front==-1){
        printf("Queue underflowed\n");
        return;
    }
    front++;
    if(front>rear){
        front=-1;
        rear=-1;
    }
}
void printQueue(){
    if(front==-1){
        printf("Queue is empty!!\n");
        return;
    }
    for(int i=front;i<=rear;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void peek(){
    printf("\nHead of queue: %d\n",arr[front]);
}

void main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    printf("\n");
    printQueue();
    dequeue();
    printQueue();
    peek();
}