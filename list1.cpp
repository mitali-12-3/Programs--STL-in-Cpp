#include<iostream>
#include<list>
using namespace std;
int main(){
    
    list<int>mylist;
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);
    for(auto it: mylist){
        cout<<it<<" ";
    }
    cout<<endl;
    mylist.push_front(80);
    mylist.push_front(90);
    for(auto it: mylist){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"Size before popping elements: "<<mylist.size()<<endl;
    mylist.pop_back();
    mylist.pop_front();
    for(auto it: mylist){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"Size after popping elements: "<<mylist.size()<<endl;
    cout<<"front/first element: "<<mylist.front()<<endl;
    cout<<"Back/last element: "<<mylist.back()<<endl;
    //use clear()
    mylist.clear();
    if(mylist.empty()==1){
        cout<<"List is empty"<<endl;
    }
    else{
        cout<<"list is not empty"<<endl;
    }
    return 0;
}