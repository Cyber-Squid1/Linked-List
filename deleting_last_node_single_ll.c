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
// method 1 using 2 pointers
"""struct node* delete_last_node(struct node *head)
{
    if(head==NULL)
        printf("The linked list is empty.");
    // code if there is only one node in the linked list
    else if(head->link==NULL){
        free(head);
        head=NULL;
    }
    // code if there are multiple nodes in the linked list
    else{
        struct node *temp=head;
        struct node *temp2=head;
        while(temp->link!=NULL){
            temp2=temp;
            temp=temp->link;
        }
        temp2->link=NULL;
        free(temp);
        temp=NULL;
    }
    return head;
}"""
// method 2 using one pointer
void delete_last_node(struct node *head)
{
    
    if(head==NULL)
        printf("The linked list is empty.");
    else if(head->link==NULL){
        free(head);
        head=NULL:
    }
    else{
        struct node *temp=head;
        while(temp->link->link!=NULL){
            temp=temp->link;
        }
        free(temp->link);
        temp->link=NULL;
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
    ptr=head;
    printf("Linked list before deleting last node= ");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
    delete_last_node(head);
    ptr=head;
    printf("Linked list after deleting last node= ");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}