#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
//1. Binary search: works for monotonic only
//o(log n)
    vector<int>arr{10,20,30,40,50};
    int target= 40;
    auto it= binary_search(arr.begin(), arr.end(), target);
    cout<<"Present/ NOt= 1/0: "<< it<<endl;

//2. Lower Bound: equal ya greater if equal is absent
//o(log n)
    auto itr= lower_bound(arr.begin(), arr.end(),target);
    cout<< " Lower bound of 35: "<<*itr<<endl;

//3. Upper Bound: always target se badi irrespective of equal being present
//o(log n)
    auto itr2= upper_bound(arr.begin(), arr.end(),target);
    cout<< " Upper bound of 40 : "<<*itr2<<endl;

//4. equal_range(): 
    vector<int> v{1,2,4,4,4,5,6};
    int target2= 4;
    
    auto range= equal_range(v.begin(), v.end(),target2);
    // has range 4 4 4 
    auto iterator1= range.first;

    while(iterator1!= range.second){
        cout<< *iterator1 <<" ";
        iterator1++;
    }
    return 0;
}