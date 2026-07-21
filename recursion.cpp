// #include<iostream>

// using namespace std;
// int Factorial(int n){
//     if(n==0){
//         return 1;
//     }

//     return n * Factorial(n-1);
//     Factorial(n-1);   
// }

// int main(){
    
//     cout<<Factorial(5);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int Fibo(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return Fibo(n-1)+Fibo(n-2);
//     Fibo(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin>>n;
//     cout<<n<<" th term of the series is "<<Fibo(n);
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr,int n){
    if(n==0 || n==1){
        return true;
    }

    return arr[n-2]<=arr[n-1] && isSorted(arr,n-1);
}
int main(){
    vector<int> arr={1,3,2,4,5};
    cout<<isSorted(arr,arr.size());
    return 0;
}