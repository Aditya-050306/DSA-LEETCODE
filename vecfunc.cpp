#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5};
    //Push Back operation
    cout<<"Initial Size of vector="<<vec.size()<<endl;
    vec.push_back(10);            //insert into vector from last
    vec.push_back(20);
    vec.push_back(30);
    cout<<"Size after pushback="<<vec.size()<<endl;
    for(int i:vec){             //for each loop
        cout<<i<<" ";
    }
    cout<<endl;
    //Pop back operation
    vec.pop_back();             //delete last element
    cout<<"Size after popback="<<vec.size()<<endl;
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    //Front and back operation
    cout<<vec.front()<<endl;        //print value which is at the beginning
    cout<<vec.back()<<endl;

    //At() operation
    cout<<vec.at(1)<<endl;// give value at given index

    //Erase operation
    vec.erase(vec.begin());
    vec.erase(vec.begin()+1);
    for(int i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
//Output: \
Initial Size of vector=5\
Size after pushback=8\
1 2 3 4 5 10 20 30
//Size after popback=7\
1 2 3 4 5 10 20 \
1\
20\
2\
2 4 5 10 20\