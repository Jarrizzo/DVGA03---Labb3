#ifndef DRIV_H
#define DRIV_H
#include "node.h"

//returns the size of the list
void listSize(struct node *head);

//Adds element at a specific index
void addAtLocation(struct node *head,int element,int index);

//Prints the entire list
void printList(struct node *head);

//Removes an element at a specific index
void removeInteger(struct node *head,int element,int index);

//Sorts the list by lowest to biggest
void sortList(struct node *head);

//Removes the entire list
void removeEntireList(struct node *head);

//Reverses the lists order
void reverseList(struct node *head);

//Rotates the list to the left so the first element is at the end
void shiftLeft(struct node *head);

//Rotates the list to the right so the last element is at the beginning
void shiftRight(struct node *head);

//Prints the adress of the first element in the list
void printStartAdress(struct node *head);

#endif