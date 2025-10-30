#include<iostream>
#define max 10
using namespace std;
int main(){
    int stack[max],top=-1,ch,i;
    do{
        cout<<"\nPush Operation";
        cout<<"\nPeep Operation";
        cout<<"\nPop Operation";
        cout<<"\nEnter the Choice\t";
        cin>>ch;
        switch(ch){
            case 1:
            top++;
            if(top==max){
                cout<<"Overflow";
            }
            else{
                cout<<"Push Element";
                cin>>stack[top];
            }
            break;

            case 2:
            if(top==-1){
                cout<<"Underflow";
            }
            else{
                for(i=top;i>=0;i--){
                    cout<<stack[i];
                }
            }
            break;

            case 3:
            if(top==-1){
                cout<<"Underflow";
            }
            else{
                top--;
            }
            break;
        }
    }while(ch<4);

    return 0;
}