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

struct node* add_at_begining(struct node *head,int value)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=value;
    temp->link=NULL;
    temp->link=head;
    head=temp;
    return head;
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

void delete_last_node(struct node *head)
{
    
    if(head==NULL)
        printf("The linked list is empty.");
    else if(head->link==NULL){
        free(head);
        head=NULL;
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
void traverse(struct node *head)
{
    if(head==NULL)
        printf("Linked list is empty.");
    else{
        struct node *temp=head;
        printf("Elements of the linked list are: ");
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->link;
        }
    }
}

struct node *reverse(struct node *head)
{
    struct node *prev=NULL;
    struct node *next=NULL;
    while(head!=NULL){
        next=head->link;
        head->link=prev;
        prev=head;
        head=next;
    }
    head=prev;
    return head;
}
struct node* delete_linked_list(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL){
        temp=temp->link;
        free(head);
        head=temp;
    }
    return head;
}
int main()
{
    int value=0;
    printf("Enter data for first node of the linked list: ");
    scanf("%d",&value);
    struct node *head=malloc(sizeof(struct node));
    head->data=value;
    head->link=NULL;
    struct node *ptr=head;
    printf("Enter 1 to add node at the end of the linked list.\n");
    printf("Enter 2 to add node at the begining of the linked list.\n");
    printf("Enter 3 to delete first node of the linked list.\n");
    printf("Enter 4 to delete last node of the linked list.\n");
    printf("Enter 5 to traverse the linked list.\n");
    printf("Enter 6 to reverse the linked list.\n");
    printf("Enter 7 to delete the whole linked list.\n");
    printf("Enter -1 to end the program.\n");
    int choice=0;
    printf("Enter your choice: ");
    scanf("%d",&choice);
    while(choice!=-1){
        switch (choice)
        {    
        case 1: printf("Enter value to be added: ");
                scanf("%d",&value);
                ptr=add_at_end(ptr,value);
                printf("Value successfully added.\n");
                break;

        case 2: printf("Enter value to be added: ");
                scanf("%d",&value);
                head=add_at_begining(head,value);
                printf("Value successfully added.\n");
                break;

        case 3: head=delete_first_node(head);
                printf("Value deleted successfully.\n");
                break;

        case 4: delete_last_node(head);
                printf("Value deleted successfully.\n");
                break;

        case 5: traverse(head);
                printf("\n");
                break;

        case 6: head=reverse(head);
                printf("The linked list is reversed.\n");
                break;

        case 7: head=delete_linked_list(head);
                printf("List deleted successfully.\n");
                break;
        
        default:printf("Enter a valid choice.\n");
                printf("Enter your choice: ");
                scanf("%d",&choice);
                break;
        }
        printf("Enter your choice: ");
        scanf("%d",&choice);
    }
    return 0;
}