#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node* add_at_end(struct node *head,int value)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=value;
    temp->link=NULL;
    
    head->link=temp;
    return temp;
}
void add_at_position(struct node *head,int value,int position)
{
    struct node *ptr=head;
    struct node *ptr2=malloc(sizeof(struct node));
    ptr2->data=value;
    ptr2->link=NULL;
    --position;
    while(position!=1){
        ptr=ptr->link;
        --position;
    }
    ptr2->link=ptr->link;
    ptr->link=ptr2;
}
int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    struct node *ptr=head;
    ptr=add_at_end(ptr,98);
    ptr=add_at_end(ptr,3);
    ptr=head;
    int value=56,position=3;
    add_at_position(head,value,position);
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}