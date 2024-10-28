#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void printDouble(int a){
    cout<< 2*a<<" ";
}
bool checkEven(int a){
    return a%2==0;
}
int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(10);
    arr.push_back(3);
    arr.push_back(24);
    arr.push_back(5);

//1. FOR_EACH()
    for_each(arr.begin(),arr.end(),printDouble);
    cout<<endl;
//2. FIND()
    int target=400;
    auto it= find(arr.begin(),arr.end(),target);
    cout<<"Do we find the target 400?(0 for No)"<<*it<<endl;
//3.find_if
    auto it2= find_if(arr.begin(),arr.end(),checkEven);
    cout<<"First even number in the given range is: "<<*it2<<endl;//returns first even encountered
//4. count
    int check=10;
    int ans= count(arr.begin(), arr.end(),check);
    cout<<"Check 10 occurs: "<<ans<<" times"<<endl;
//5. count_if
    int res= count_if(arr.begin(),arr.end(),checkEven);
    cout<<"Number of evens in the vector are: "<<res<<endl;
//6. sort()
    sort(arr.begin(),arr.end());
    cout<<"Sorting: "<<endl;
    for(auto a: arr){
        cout<< a<<" "; //custom comparator
    }
    cout<<endl;
//7. reverse()
    reverse(arr.begin(),arr.end());
    cout<<"REVERSING: "<<endl;
    for(auto a: arr){
        cout<< a<<" "; //custom comparator
    }
    cout<<endl;
//8. rotate()
    cout<<" right Rotate() algorithm:"<<endl;
    vector<int>vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    vec.push_back(60);
    cout<<"vector given: "<<endl;
    for(auto a: vec){
        cout<< a<<" "; //custom comparator
    }
    cout<<endl;
    int shift=3;
    cout<<"after rotating: "<<endl;
    rotate(vec.begin(),vec.begin()+shift, vec.end());
    for(auto a: vec){
        cout<< a<<" "; //custom comparator
    }
    cout<<endl;

    cout<<" Left Rotate() algorithm:"<<endl;
    vector<int>vec2;
    vec2.push_back(10);
    vec2.push_back(20);
    vec2.push_back(30);
    vec2.push_back(40);
    vec2.push_back(50);
    vec2.push_back(60);
    cout<<"vector given: "<<endl;
    for(auto a: vec2){
        cout<< a<<" "; //custom comparator
    }
    cout<<endl;
    int shift2=2;
    cout<<"after rotating: "<<endl;
    rotate(vec2.rbegin(),vec2.rbegin()+shift2 , vec2.rend());
    for(auto a: vec2){
        cout<< a<<" "; //custom comparator
    }
    cout<<endl;
    return 0;
}