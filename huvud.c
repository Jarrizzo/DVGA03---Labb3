#include <stdio.h>
#include "Labb3.h"
#include "driv.h"
#include "node.h"


void Menue();
bool isNumber(char* Choice);

int main(){ 

    system("clear");
    
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(node));

    Menue(head);

    return 0;
}

void Menue(struct node *head){



    int Choice;
    int index,element;


    while(Choice != 0){
        printf("\nChoose any of the following\n");
        printf("\n0: Exit\n1: Print List\n2: Print the size of list\n3: Add an integer at the end of list\n4: Add an integer(specific location)\n5: Remove a specific integer\n6: Remove an integer at specific location\n");
        printf("7: Empty entire list\n8: Reverse list\n9: Shift list to the left (adding first integer at end)\n10: Shift list to the right (add last element at begining)\n11: Sort list\n12: Print Starting adress of list\n");
        printf("\nInput:");
        
        scanf("%d",&Choice);

        if(Choice < 0 || Choice > 12){
            system("clear");
            printf("Invalid input\n");
            continue;
        }
    
        switch(Choice){
            case 0:
                    unsigned int sleep(unsigned int seconds);            
                    for(int i = 0;i < 1;i++){
                    system("clear");
                    printf("Exiting Program.\n");
                    sleep(1);                
                    system("clear");
                    printf("Exiting Program..\n");
                    sleep(1);                
                    system("clear");
                    printf("Exiting Program...\n");
                    sleep(1);
                    system("clear");
                }
                printf("Exit Done...\n");
                break;
            case 1:
                system("clear");
                printList(head);
                printf("\n");
                break;
            case 2:
                system("clear");
                listSize(head);
                printf("\n");
                break;
            case 3:
                system("clear");
                index = 999;
                printf("Choose an integer to add:");
                scanf("%d",&element);
                addAtLocation(head,element,index);
                break;
            case 4:
                system("clear");
                printf("Choose an index to add at:");
                scanf("%d",&index);
                system("clear");
                printf("Choose an integer to add:");
                scanf("%d",&element);
                addAtLocation(head,element,index);
                break;                
            case 5:
                index = 999;
                system("clear");
                if(!isEmpty(head)){
                    printf("Choose an integer to remove:");
                    scanf("%d",&element);
                    removeInteger(head,element,index);
                }
                else{
                    printf("The list is empty\n");
                }
                break;
            case 6:
                element = 0;
                system("clear");
                if(!isEmpty(head)){
                    printf("Choose an index to remove at:");
                    scanf("%d",&index);
                    system("clear");
                    removeInteger(head,element,index);
                }
                else{
                    printf("The list is empty\n");
                }                
                break;
            case 7:
                system("clear");
                removeEntireList(head);
                break;
            case 8:
                system("clear");
                reverseList(head);
                break;
            case 9:
                system("clear");
                shiftLeft(head);
                break;
            case 10:
                system("clear");
                shiftRight(head);
                break;
            case 11:
                system("clear");
                sortList(head);
                break;
            case 12:
                system("clear");
                printStartAdress(head);
                break;

        }
    }
}




