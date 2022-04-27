#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node* add_at_end(struct node *head,int value)
{
    struct node *temp=malloc(sizeof(struct node));;
    temp->data=value;
    temp->link=NULL;
    
    head->link=temp;
    return temp;
}
struct node* delete_first_node(struct node *head)
{
    if(head==NULL)
        printf("Linked list is already empty");
    else{
        struct node *temp=head;
        head=head->link;
        free(temp);
        temp=NULL;
    }
    return head;
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
    printf("Linked list before deleting first element= ");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
    head=delete_first_node(head);
    ptr=head;
    printf("Linked list after deleting first element= ");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}