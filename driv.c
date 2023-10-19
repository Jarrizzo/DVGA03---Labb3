#include "driv.h"
#include "node.h"
#include "list.h"
#include "stdio.h"
#include "Labb3.h"


void listSize(struct node *head){
    int size = calcSize(head);
    printf("size of the list is :%d\n",size);
}
void addAtLocation(struct node *head,int element,int index){
    addElementAtIndex(head,element,index);
}
void printList(struct node *head){
    if(isEmpty(head)){
        printf("List is Empty");
    }
    else{
        int index = 0;
        printf("Current list is:\n");
        while(index < calcSize(head)){
            printf("%d\t",returnValueAtIndex(head,index));
            index++;
        }
    }
}
void removeInteger(struct node *head,int element,int index){
        removeElementAtIndex(head,element,index);
}
void sortList(struct node *head){
    sortTheList(head);
}
void removeEntireList(struct node *head){
    if(!isEmpty(head)){
        int index = 1;
        int element = 0;
        while(!isEmpty(head)){
            removeInteger(head,element,index);
        }
    }
    else{
        printf("List is empty\n");
    }
}
void reverseList(struct node *head){
    if(!isEmpty(head)){ 
    reverseTheList(head);
    printf("List is now reversed\n");
    }
    else if(isEmpty(head)){
        printf("The list is empty\n");
    }
}
void shiftLeft(struct node *head){
    if(!isEmpty(head)){
        struct node *current = head->next;
        int tmp;
        tmp = current->data;

        for(int i = 0; i < calcSize(head)-1; i++){
            current->data = current->next->data;
            current = current->next;
        }
        current->data = tmp;
        printf("List has now been shifted\n");
    }
    else{
        printf("The list is empty\n");
    }
}
void shiftRight(struct node *head){
    if(!isEmpty(head)){
        struct node *current = head->next;
        int tmp,element = 0,index = 0;
        while(current->next != NULL){
            current = current->next;
        }
        tmp = current->data;
        removeElementAtIndex(head,element,calcSize(head));
        addElementAtIndex(head,tmp,index);
        system("clear");
        printf("List has now been shifted\n");
    }
    else{
        printf("The list is empty\n");
    }
}
void printStartAdress(struct node *head){
    if(!isEmpty(head)){
        printf("starting adress of list is: %p \n",head->next);
    }
    else{
        printf("The list is empty\n");
    }
}