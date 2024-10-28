#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    vector<int>a{1, 2, 3, 4};
    vector<int>b{3, 4, 5, 6};
    vector<int>result;
    cout<<"a={1, 2, 3, 4}"<<endl;
    cout<<"b={3, 4, 5, 6}"<<endl;
    cout<<"UNION: "<<endl;
    set_union(a.begin(), a.end(), b.begin(), b.end(), inserter(result, result.begin()));
    for(int a: result){
        cout<< a<<" ";
    }
    cout<<endl;
    cout<<"INTERSECTION: "<<endl;
    vector<int>result2;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), inserter(result2, result2.begin()));
    for(int a: result2){
        cout<< a<<" ";
    }
    cout<<endl;
    cout<<"SET DIFFERENCE: "<<endl;
    vector<int>result3;
    set_difference(a.begin(), a.end(), b.begin(), b.end(), inserter(result3, result3.begin()));
    for(int a: result3){
        cout<< a<<" ";
    }
    cout<<endl;
    cout<<"SYMMETRIC DIFFERENCE: "<<endl;
    vector<int>result4;
    set_symmetric_difference(a.begin(), a.end(), b.begin(), b.end(), inserter(result4, result4.begin()));
    for(int a: result4){
        cout<< a<<" ";
    }
    cout<<endl;
    return 0;
}