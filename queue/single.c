#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL,*rear=NULL;
struct node{
    int data;
    struct node *next;
};
void insertNode(int data){
    if(head==NULL) {
        struct node *newNode=(struct node *)malloc(sizeof(struct node));
        newNode->data=data;
        newNode->next=NULL;
        head=newNode;
        rear=newNode;
    }else{
        struct node *newNode=(struct node *)malloc(sizeof(struct node));
        newNode->data=data;
        rear->next=newNode;
        rear=newNode;

    }
}

void dequeueNode(){
    if(head==NULL){
        printf("Queue is empty");
        return;
    }
    struct node *temp=head;
    head=head->next;
    printf("%d deleted from the queue",temp->data);
    free(temp);
}

void printQueue(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void peek(){
    printf("\nFirst node: %d\n",head->data);
}
int main(){

    insertNode(1);
    insertNode(2);
    insertNode(3);

    printQueue();
    printf("\n");
    dequeueNode();
    printf("\n");
    printQueue();

    peek();
    return 0;
}