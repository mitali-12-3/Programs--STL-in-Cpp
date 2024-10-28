#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

//MAKE_HEAP:  o(n)

    vector<int>arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(55);
    arr.push_back(66);
    arr.push_back(77);
    make_heap(arr.begin(), arr.end()); //o(n) time
    for(int a: arr){
        cout<< a<<" ";
    }
    cout<<endl;

//USE PUSH_HEAP AFTER INSERTION: o(log n)

    arr.push_back(100);
    push_heap(arr.begin(), arr.end());
    for(int a: arr){
        cout<< a<<" ";
    }
    cout<<endl;

//DELETION: POP_HEAP()--> throws 100 at last
// o(1)
    pop_heap(arr.begin(), arr.end());
     for(int a: arr){
        cout<< a<<" ";
    }
    cout<<endl;
    // pop from vector also: 
    arr.pop_back();
     for(int a: arr){
        cout<< a<<" ";
    }
    cout<<endl;

//sort heap
//o(n)
    sort_heap(arr.begin(), arr.end());
     for(int a: arr){
        cout<< a<<" ";
    }
    cout<<endl;
    return 0;
}