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

    if(newNode == NULL || (calcSize(head) < index && index != 999) || index < 0){
        system("clear");
        printf("ERROR:\n");    
    }
    
    else{
        if(!isEmpty(head)){

            if((index == 1 || index == 0)){     //Lägg till i början
                newNode->data = element;
                newNode->next = head->next;
                head->next = newNode;
                system("clear");
                printf("Element added\n\n");
            }

            else if(index == 999){              //Lägg till på slutet
                while(current->next != NULL){
                    current = current->next;
                }
                newNode->data = element;
                newNode->next = NULL;
                current->next = newNode;
                system("clear");
                printf("Element added\n\n");

            }

            else if(index > 1 && index < calcSize(head)){      //Lägg till i mitten
                currentIndex = 0;
                while(currentIndex < index-2){
                    current = current->next;
                    currentIndex++;
                }
                newNode->data = element;
                newNode->next = current->next;
                current->next = newNode;
                system("clear");
                printf("Element added\n\n");

            }
        }
        else if(isEmpty(head)){

            if((index == 1 || index == 0) || index == 999){     //Lägg till i början/slutet (Tom lista)
                newNode->data = element;
                newNode->next = NULL;
                head->next = newNode;
                system("clear");
                printf("Element added\n\n");
            }
            else{
                system("clear");
                printf("That index is invalid\n");
            }
        }
    }
}
void removeElementAtIndex(struct node *head,int element,int index){

    struct node *current = head->next;
    int currentIndex = 0;
    
    if(index < 0 || (index > calcSize(head) && index != 999)){
        system("clear");
        printf("ERROR:\n");
    }
    else{

        if(!isEmpty(head)){
        system("clear");
            
        if(index == 999){                             //Tar bort valt element
            current = head;
            while(current->next->data != element){

                current = current->next;
                
            }
            struct node *toRemove = current->next;
            current->next = current->next->next;
            free(toRemove);
            printf("Element removed\n");
        }
        else if(index == 1 || index == 0){
            current = head;
            struct node *toRemove = current->next;
            current->next = current->next->next;
            free(toRemove);
            printf("Element removed\n");
        }
        else{                                        //Tar bort på valt index
            while(currentIndex < index-2){
                current = current->next;
                currentIndex++;
            }
            struct node *toRemove = current->next;
            current->next = current->next->next;
            free(toRemove);
            printf("Element removed\n");
        }
            

        }
        else if(isEmpty(head)){
            system("clear");
            printf("\nThe list is empty\n");
        }
    }
}

void sortTheList(struct node *head){
    system("clear");
    struct node *current,*p,*q;

    if(!isEmpty(head)){

        for(current=NULL;current != head->next; current = p){
            for(p = head;p->next != current; p = p->next){

                q = p->next;
                if(p->data > q->data){
                    int tmp = p->data;
                    p->data = q->data;
                    q->data = tmp;
                }
            }
        }
        printf("List is now sorted\n");
    }
    else{
        printf("The list is empty\n");
    }
}
void reverseTheList(struct node *head){
    struct node *prev = NULL;
    struct node *nextNode = NULL;
    struct node *current = head->next;

    while(current != NULL){
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    head->next = prev;
    
}
