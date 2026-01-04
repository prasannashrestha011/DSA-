#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *tail;

void addAtBeginning(int data){
    if(tail==NULL){
        struct node *newP=malloc(sizeof(struct node));
        newP->data=data;
        tail=newP;
        tail->next=tail;
        tail->prev=tail;
        return;
    }
    struct node *newP=malloc(sizeof(struct node));
    newP->data=data;
    struct node *head=tail->next;
    newP->next=head;
    head->prev=newP;

    newP->prev=tail;
    tail->next=newP;
}

void printLinkedList(){
    struct node *head=tail->next;
    do{
        printf("%d ",head->data);
        head=head->next;
    }while(head!=tail->next);
}
void main(){
    addAtBeginning(5);
    addAtBeginning(4);
    addAtBeginning(3);
    addAtBeginning(2);
    addAtBeginning(1);
    printLinkedList();
}