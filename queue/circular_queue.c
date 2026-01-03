#include<stdio.h>
#define SIZE 6

int arr[SIZE];
int front=-1;
int rear=-1;

void enqueue(int data){
    if((rear+1)%SIZE==front){
        printf("Queue overflowed");
        return;
    }

    if(front==-1){
        front=0;
    }

    rear=(rear+1)% SIZE;
    arr[rear]=data;
}
void dequeue(){
    if(front==-1){
        printf("Queue underflowed");
        return;
    }
    //reset
    if(front==rear){
        front=-1;
        rear=-1;
    }
    front=(front+1)%SIZE;
    return;
}
void printQueue(){
    if(front==-1){
        printf("Queue is empty");
        return;
    }
    for(int i=front;i<=rear;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
}

int main(){
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
printQueue();
dequeue();
printQueue();
return 0;
}