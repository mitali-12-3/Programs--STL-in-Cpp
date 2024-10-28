#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v{11,11,11,22,22,33};
    auto it= unique(v.begin(), v.end());
    // now it has all unique elements, it ke baad all are duplicates
    v.erase(it, v.end()); //if confused, comment out this and see output
    //delete krdo it ke baaad waalo ko
    for(int a: v){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}