#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    struct node *current=malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current; //updating link part of first node

    //method 1 to add third node
    //struct node *current2=malloc(sizeof(struct node));
    //current2->data=3;
    //current2->link=NULL;
    //current->link=current2; //updating link part of second node

    //method 2 to add third node
    current=malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL:
    head->link->link=current;
}