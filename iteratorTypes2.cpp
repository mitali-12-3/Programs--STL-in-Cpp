#include<iostream>
#include<vector>
using namespace std;
int main(){
//5. RANDOM ACCESS ITERATOR
//forward traversal
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    vector<int>::iterator it5=arr.begin();
    while(it5!=arr.end()){
        //*it5=*it5+5;//write
        cout<<*it5<<" ";//read
        it5++;//forward
    }
    cout<<endl;
//backward traversal
    vector<int>::iterator it=arr.end();
    while(it!=arr.begin()){
        *it--;      
        cout<<*it<<" ";//read
    }
    cout<<endl;
//randomly accesing
    vector<int>::iterator it2=arr.begin()+2;
    cout<<*it2<<endl;
    return 0;
}