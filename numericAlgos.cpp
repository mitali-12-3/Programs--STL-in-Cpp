#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std; 
int main(){

//1. accumulate()

    vector<int>arr{10,20,30,40,50};
    int totalSum= accumulate(arr.begin(), arr.end(),0); //adding 0 mei the entire sum(sum=0)
    cout<<"Total sum of all elements: "<< totalSum<<endl;
    
//2. inner_product()

    vector<int>a{1,2,3};
    vector<int>b{3,4,5};
    // 1*3+ 2*4+ 3*5-->3+8+15-->26
    int innerProd= inner_product(a.begin(), a. end(),b. begin(),0);
    cout<<"Inner product of 2 vectors: "<< innerProd<<endl;

//3. partial_sum()

    vector<int>c{1,2,3,4};
    //1 3 6 10 --> [(1),(1+2),(1+2+3),(1+2+3+4)
    vector<int>result(c.size());
    partial_sum(c.begin(), c.end(), result.begin());
    for(int a: result){
        cout<<a <<" ";
    }
    cout<<endl;
//4. iota()

    vector<int>d(5);
    iota(d.begin(), d.end(), 250);  
    for(int a: d){
        cout<<a <<" ";
    }
    return 0;
}
