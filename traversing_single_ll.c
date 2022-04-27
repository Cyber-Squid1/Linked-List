#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void count_nodes(struct node *head)
{
    int count=0;
    if(head==NULL)
        printf("The linked list is empty.");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        ++count;
        ptr=ptr->link;
    }
    printf("The number of nodes in the linked list are: %d\n",count);
}
void traverse(struct node *head)
{
    if(head==NULL)
        printf("The linked list is empty.");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}
int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL;
    head->link->link=current;
    count_nodes(head);
    traverse(head);
    return 0;
}