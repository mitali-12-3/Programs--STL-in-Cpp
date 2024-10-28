#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool checkEven(int a){
    return a%2==0;
}
int main()
{
    vector<int>arr{10,11,12,13,14,15};
    //auto it=
    partition(arr.begin(), arr.end(),checkEven);
    for(int a: arr){
        cout<<a<<" "; 
    }
    return 0;
} 

