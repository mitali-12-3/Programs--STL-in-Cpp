#include<iostream>
#include<list>
using namespace std;
int main(){
    
    list<int>mylist;
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);
    mylist.push_front(80);
    mylist.push_front(90);
    mylist.pop_back();
    mylist.pop_front();
    mylist.remove(10); //removes 10 & even removes duplicates of 10 if present
    for(auto it: mylist){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"First: "<< mylist.front()<<" and last: "<< mylist.back()<<endl;
    cout<< *(mylist.begin())<<endl;
    // cout<< *(mylist.end())<<endl;
    list<int>::iterator it= mylist.begin();
    while(it!= mylist.end()){
        cout<< *it<<" ";
        it++;
    }
    cout<<endl;
    //SWAPPING EXAMPLE
   list<int>first;
   first.push_back(10);
   first.push_back(20);
   first.push_back(30);
   list<int>second;
   second.push_back(21);
   second.push_back(22);
   second.push_back(23);
   first.swap(second);
   list<int>::iterator it2= second.begin();
    while(it2!= second.end()){
        cout<< *it2<<" ";
        it2++;
    }
    cout<<endl;
    first.insert(first.begin(),100);
    list<int>::iterator it3= first.begin();
    while(it3!= first.end()){
        cout<<*it3<<" ";
        it3++;
    }
    cout<<endl;
    first.erase(first.begin(), first.end());
    cout<< first.size()<<endl;
    return 0;

}