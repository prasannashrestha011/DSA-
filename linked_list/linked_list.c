#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *head=NULL;
void insertAtBeginning(int data){
    struct node *current=(struct node *)malloc(sizeof(struct node));
    current->data=data;
    current->next=head;
    head=current;
}
void insertAtEnd(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    struct node *temp=head;   
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void popAtBeginning(){
    struct node *first=head->next;
    struct node *temp=head;
    head=head->next;
    free(temp);
}
void popAtEnd(){
    struct node *temp=head;
    if(temp==NULL)
        return;

    if(temp->next==NULL){
        free(temp);
        return;
    }
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}
void printList(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);
    insertAtEnd(40);

    printList();
    popAtBeginning();
    printf("\n");
    printList();
    popAtEnd();
    printf("\nList after pop at the end:\n");
    printList();
    return 0;
}