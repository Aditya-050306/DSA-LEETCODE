#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    cout<<"Initial Size of vector="<<vec.size()<<endl;
    vec.push_back(10);            //insert into vector from last
    vec.push_back(20);
    vec.push_back(30);
    cout<<"Size after pushback="<<vec.size()<<endl;
    for(int i:vec){             //for each loop
        cout<<i<<endl;
    }
    vec.pop_back();             //delete last element
    cout<<"Size after popback="<<vec.size()<<endl;
    for(int i:vec){
        cout<<i<<endl;
    }
    cout<<vec.front()<<endl;        //print value which is at the beginning

    cout<<vec.at(1)<<endl; // give value at given index
    return 0;
}