#include<iostream>
using namespace std;
void swap(int *x ,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubblesort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void printArray(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[]={34,5,23,82,1,45,67};
    int n= sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    cout<<"Sorted Array:\n";
    printArray(arr,n);
    return 0;
}