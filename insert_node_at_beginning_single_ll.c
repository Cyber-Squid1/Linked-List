#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node* add_at_begining(struct node *head,int value)
{
    struct node *point=malloc(sizeof(struct node));
    point->data=value;
    point->link=NULL;
    point->link=head;
    head=point;
    return head;
}
int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    struct node *ptr=head;
    head=add_at_begining(ptr,10);
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}