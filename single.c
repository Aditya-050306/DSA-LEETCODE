#include<stdio.h>
#include<malloc.h>
struct snode{
    int data;
    struct snode *next;
};
typedef struct snode snode;
int main(){
    int ch;
    snode *top=NULL, *ptr,*temp,*f;
    do{
        printf("Enter 1 for PUSH operation\n");
        printf("Enter 2 for PEEP operation\n");
        printf("Enter 3 for POP operation\n");
        printf("Enter your Choice\t");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            temp=(snode *)malloc(sizeof(snode));
            printf("Push Element\t");
            scanf("%d",&temp->data);
            if(top==NULL){
                top=temp;
                top->next=NULL;
            }
            else{
                temp->next=top;
                top=temp;
            }
            break;

            case 2:
            ptr=top;
            while(ptr!=NULL){
                printf("%d\n",ptr->data);
                ptr=ptr->next;
            }
            break;

            case 3:
            if(top==NULL){
                printf("Underflow\n");
            }
            else{
                f=top;
                top=top->next;
                free(f);
            }
            break;
        }
    }
    while(ch<4);
    return 0;
}