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
void delete_nodeat_position(struct node **head, int position)
{
    struct node *previous=*head;
    struct node *delete=*head;
    if(*head==NULL)
        printf("Linked list is already empty.");
    else if(position==1){
        *head=current->link;
        free(current);
        current=NULL;
    }
    else{
        while(position!=1){
            previous=current;
            current=current->link;
            --position;
        }
        position->link=current->link;
        free(current);
        current=NULL;
    }
}
int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    struct node *ptr=head;
    ptr=add_at_end(ptr,98);
    ptr=add_at_end(ptr,3);
    ptr=add_at_end(ptr,67);
    ptr=head;
    int position;
    printf("Enter position of node to be deleted: ");
    scanf("%d",&position);
    delete_nodeat_position(&head,position);
    return 0;
}