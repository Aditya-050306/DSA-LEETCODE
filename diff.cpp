#include<iostream>
using namespace std;
int main(){
    int a[11];
    int b[11];
    int c[11];
    int n,m,i=1,j=1,k=1;
    cout<<"Enter 1st number\t";
    cin>>n;
    cout<<"Enter 2nd number\t";
    cin>>m;
    
    for(i=1;i<=10;i++){
        a[i]=n*i;
       cout<<"\n"<<a[i];
    }
        for(j=1;j<=10;j++){
        b[j]=m*j;
       cout<<"\n"<<b[j];
    }
       
        if(i==j && i==k && j==k){
        c[k]=a[i]-b[j];
        i++;
        j++;
        k++;

         cout<<"\n"<<c[k];
        }
               
    
    
    
   
    return 0;
}