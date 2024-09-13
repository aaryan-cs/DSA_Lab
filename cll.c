#include<stdio.h>
#include "cll.h"

int init(struct node** head){
    struct node* head  = NULL;
    return 1;
}

int insertAfter(struct node** head, struct node *prev, int data){
    struct node* prev = NULL;
    struct node* newNode = (struct node *)malloc(sizeof(struct node));
    if(!newNode) return 0;
    newNode -> data = data;
    newNode -> next = NULL;

    struct node* temp = *head;
    if (prev==head){
        newNode->next = temp->next;
        temp->next = newNode;
        return 1;
    }
    while (temp!=head){
        if(temp==prev){
            newNode->next = temp->next;
            temp->next = newNode;
            return 1;
        }
        temp  = temp->next;
    }
    return 0;

}
int deleteElement(struct node** head, int data){
    if(!(*head)) return 0;
    struct node* temp = *head;
        if(temp->data==data){
            struct node* end = (*head)-> next;
            while(end->next!=*head){
                end = end->next;
            }
            head= &(temp->next);
            end->next = temp->next;
            temp->next = NULL;
            return;            
        }
    temp = temp->next;
    while(temp!=head){
        if(temp->data == data){
            
        }
    }
}
