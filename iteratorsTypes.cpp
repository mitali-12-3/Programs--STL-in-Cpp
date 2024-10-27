#include<iostream>
#include<forward_list>
#include<list>
#include<vector>
using namespace std;
int main(){
//1. FORWARD ITERATOR

    cout<<"Iterating and writing:"<<endl;
    forward_list<int>nums2{12,14,8};
    forward_list<int>::iterator it2=nums2.begin();
    while(it2!=nums2.end()){
        *it2= (*it2) +5;//writing part
        it2++;
    }
    cout<<endl;

    cout<<"Iterating and reading:"<<endl;
    forward_list<int>nums{12,14,8};
    forward_list<int>::iterator it=nums.begin();
    while(it!=nums.end()){
        cout<<*it<<" ";//reading part
        it++;
    }
    cout<<endl;


//2. BIDIRECTIONAL ITERATOR

    list<int> l;
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);
    cout<<"Bidirection iterator:"<<endl;
    cout<<"forward print"<<endl;
    list<int>::iterator it3= l.begin();
    while(it3!=l.end()){
        *it3= (*it3) +2;//write
        cout<<*it3<<" ";
        it3++;//forward move
    }
    cout<<endl;
    cout<<"backward print: "<<endl;
    list<int>::iterator it4= l.end();
    while(it3!=l.begin()){
        it3-- ;//backward move
        cout<<*it3<<" ";
    }
    cout<<endl;

//3. INPUT ITERATOR
//4. OUTPUT ITERATOR
//5. RANDOM ACCESS ITERATOR

    return 0;
}