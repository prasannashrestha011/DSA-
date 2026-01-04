#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *tail;
void addAtBeginning(int data){
    if(tail==NULL){
        struct node *newP=malloc(sizeof(struct node));
        newP->data=data;
        tail=newP;
        newP->next=newP;
        return;
    }

    struct node *newP=malloc(sizeof(struct node));

    newP->data=data;
    newP->next=tail->next;

    tail->next=newP;
}

void addAtEnd(int data){
    if(tail==NULL){
        struct node *newP=malloc(sizeof(struct node));
        newP->data=data;
        tail=newP;
        newP->next=tail;
    }

    struct node *newP=malloc(sizeof(struct node));
    newP->data=data;
    newP->next=tail->next;
    tail->next=newP;
    tail=newP;
}


void printLinkedList(){
    if(tail==NULL){
        printf("\n Linked list is empty!! \n");
        return;
    }
    struct node *temp=tail->next;
    do{

        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=tail->next);
}
int main(){
    addAtEnd(1);
    addAtEnd(2);
    addAtEnd(3);
    addAtEnd(4);
    addAtEnd(5);
    printLinkedList();
    return 0;
}