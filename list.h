#ifndef LIST_H
#define LIST_H

#include "node.h"
#include "Labb3.h"

//Calculates the size of the list and returns that integer
int calcSize(struct node *head);

//Checks if the lis is empty
bool isEmpty(struct node *head);

//Retrives a value from the list at a specific location and returns that value
int returnValueAtIndex(struct node *head,int index);

//Retrives a index from the list at a specific value and returns that index
int returnIndexOfValue(struct node *head,int Value);

//Adds an element at a specific location in the list
void addElementAtIndex(struct node *head,int element,int index);

//Removes an element at a specific location of the list
void removeElementAtIndex(struct node *head,int element,int index);

//Sorts the list and puts the lowest value at the beginning of the list
void sortTheList(struct node *head);

//Reverses the list so that every index is reversed
void reverseTheList(struct node *head);


#endif