#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
    struct node *ptr;
};
typedef struct node node;
node *start = NULL;
node *end = NULL;
void ftraverse();
void btraverse();
void insert();
void delete();
int main(){
    int i,n,ch,item;
    node *ptr;
    printf("Enter the number of nodes\t");
    scanf("%d",&n);
    printf("Enter value of nodes\t");
    for(i=1;i<=n;i++){
        scanf("%d",&item);
        ptr=(node *)malloc(sizeof(node));
        ptr->data=item;
        ptr->next=NULL;
        ptr->prev=NULL;
        if(start==NULL){
            start=ptr;
            end=ptr;
        }
        else{
            end->next=ptr;
            ptr->prev=end;
            end=ptr;
        }
    }
    do{
        printf("Enter 1 for forward traversing \n");
        printf("Enter 2 for backward traversing \n");
        printf("Enter 3 to Insert \n");
        printf("Enter 4 to Delete \n");
        printf("Enter 5 to Exit \n");
        scanf("%d",&ch);
        if(ch==1 || ch==2){
        printf("************************\n");
        }
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
            delete();
            break;
        }
    }
    while(ch<5);
    return 0;
}
   
    void ftraverse(){
        node *ptr=start;
        while(ptr!=NULL){
            printf("%d \n",ptr->data);
            ptr=ptr->next;
        }
    }

    void btraverse(){   
        node *ptr=end;
        while(ptr!=NULL){
            printf("%d \n",ptr->data);
            ptr=ptr->prev;
        }
    }

    void insert(){
        node *ptr,*temp;
        int pos,item,count=0;
        printf("Enter the value of new node");
        scanf("%d",&item);
        printf("Enter the position to insert");
        scanf("%d",&pos);
        temp=(node *)malloc(sizeof(node));
        temp->data=item;
        temp->next=NULL;    
        temp->prev=NULL;
        if(pos==1){
        temp->next=start;
        start->prev=temp;
        start=temp;
        }
        ptr=start;
        while(ptr!=NULL){
        count=count+1;
        
        if (count==pos-1){
            temp->next=ptr->next;
            ptr->next=temp;
            temp->prev=ptr;
            ptr->next->prev=temp;
        }
        ptr=ptr->next;
           
        }
      
    }
    void delete(){
        node *ptr=start;
        int pos,count=0;
        printf("Enter the position to delete");
        scanf("%d",&pos);
        if(pos==1){
           
            start=start->next;
            start->prev=NULL;
           
        }
        
            while(ptr!=NULL){
                count=count+1;
                if(count==pos-1){
                    ptr->next=ptr->next->next;
                    
                        ptr->next->prev=ptr;
                    
                   
                }
                ptr=ptr->next;
            }

    }
    