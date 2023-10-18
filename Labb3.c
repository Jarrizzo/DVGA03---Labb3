#include "list.h"
#include "node.h"
#include "Labb3.h"
#include <stdio.h>

int calcSize(struct node *head){
    int size = 0;
    struct node *current = head->next;


    while(current != NULL){
        size++;
        current = current->next;
    }

return size;
}

   
bool isEmpty(struct node *head){
    int size = 0;
    struct node *current = head->next;

    while(current != NULL){
        size++;
        current = current->next;
    }

    if(size > 0){
        return false;
    }
    else{
        return true;
    }
}

int returnValueAtIndex(struct node *head,int index){
    int lower = 0;
    int retValue = 0;
    struct node *current = head->next;

    while(lower < index){
        current = current->next;
        lower++;
    }
    return current->data;
}

int returnIndexOfValue(struct node *head,int Value){
    int index = 0;
    struct node *current = head->next;

    while(current->data != Value){
        current = current->next;
        index++;
    }
    return index;
}
  void addElementAtIndex(struct node *head,int element,int index){
    int currentIndex = 0;
    struct node *newNode = malloc(sizeof(struct node));
    struct node *current = head->next;

    if(newNode == NULL /*|| calcSize(head) < index-1 || index < 0*/){
        printf("ERROR:\n");
        exit(0);
    }
    

    if(!isEmpty(head)){

        if((index == 1 || index == 0)){     //Lägg till i början
            newNode->data = element;
            newNode->next = head->next;
            head->next = newNode;
            printf("Element added\n\n");
        }

        else if(index == 999){              //Lägg till på slutet
            while(current->next != NULL){
                current = current->next;
            }
            newNode->data = element;
            newNode->next = NULL;
            current->next = newNode;
            printf("Element added\n\n");

        }

        else if(index > 1 && index < 999){      //Lägg till i mitten
            currentIndex = 0;
            while(currentIndex < index){
                current = current->next;
                currentIndex++;
            }
            newNode->data = element;
            newNode->next = current->next;
            current->next = newNode;
            printf("Element added\n\n");

        }
    }
    else if(isEmpty(head)){

        if((index == 1 || index == 0) || index == 999){     //Lägg till i början/slutet (Tom lista)
            newNode->data = element;
            newNode->next = NULL;
            head->next = newNode;
            printf("Element added\n\n");
        }
        else{
            printf("That index is invalid\n");
        }
    }
}
void removeElementAtIndex(struct node *head,int index){

    

}

void sortList(struct node *head){

}
