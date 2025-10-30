#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node node;

node *start = NULL;
node *end = NULL;

// function prototypes
void ftraverse();
void btraverse();
void insert();
void Delete();

int main(){
    int i, n, ch, item;
    node *ptr;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter values of nodes:\n");
    for(i = 1; i <= n; i++){
        scanf("%d", &item);
        ptr = (node *)malloc(sizeof(node));
        ptr->data = item;
        ptr->next = NULL;
        ptr->prev = NULL;

        if(start == NULL){
            start = ptr;
            end = ptr;
        }
        else{
            end->next = ptr;
            ptr->prev = end;
            end = ptr;
        }
    }

    do{
        printf("\nEnter:\n1 for forward traversing\n2 for backward traversing\n3 to Insert\n4 to Delete\n5 to Exit\n");
        scanf("%d",&ch);
        printf("************************\n");

        switch(ch){
            case 1: 
                ftraverse();
                break;
            case 2:
                btraverse();
                break;
            case 3:
                insert();
                break;
            case 4:
                Delete();
                break;
            case 5:
                printf("Exiting..\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    while(ch != 5);
    return 0;
}


void ftraverse(){
    node *ptr = start;
    printf("Forward Traversal: ");
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void btraverse(){
    node *ptr = end;
    printf("Backward Traversal: ");
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->prev;
    }
    printf("\n");
}

void insert(){
    int pos,item,count=1;
    node *ptr, *temp;

    printf("Enter the value of new node: ");
    scanf("%d",&item);
    printf("Enter the position to insert: ");
    scanf("%d",&pos);

    temp = (node*)malloc(sizeof(node));
    temp->data = item;
    temp->next = NULL;
    temp->prev = NULL;

    if(pos == 1){
        temp->next = start;
        if(start != NULL)  // if list not empty
            start->prev = temp;
        start = temp;
        if(end == NULL)    // if list was empty
            end = temp;
        return;
    }

    ptr = start;
    while(ptr != NULL && count < pos-1){
        ptr = ptr->next;
        count++;
    }
    if(ptr == NULL){
        printf("Position out of range.\n");
        free(temp);
        return;
    }
    temp->next = ptr->next;
    temp->prev = ptr;
    if(ptr->next != NULL)
        ptr->next->prev = temp;
    ptr->next = temp;

    if(temp->next == NULL)
        end = temp;
    printf("Inserted successfully\n");
}

void Delete(){
    int pos,count=1;
    node *ptr;

    printf("Enter the position to delete: ");
    scanf("%d",&pos);

    if(start == NULL){
        printf("List is empty.\n");
        return;
    }
    if(pos == 1){
        ptr = start;
        start = start->next;
        if(start != NULL)
            start->prev = NULL;
        else
            end = NULL;
        free(ptr);
        printf("Deleted node at position 1\n");
        return;
    }

    ptr = start;
    while(ptr != NULL && count < pos){
        ptr = ptr->next;
        count++;
    }
    if(ptr == NULL){
        printf("Position out of range.\n");
        return;
    }
    if(ptr->prev != NULL)
        ptr->prev->next = ptr->next;
    if(ptr->next != NULL)
        ptr->next->prev = ptr->prev;
    if(ptr == end)
        end = ptr->prev;
    free(ptr);
    printf("Deleted successfully\n");
}

