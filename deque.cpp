#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_back(10);//10
    dq.push_back(20);//10 20
    dq.push_back(30);// 10 20 30
    dq.push_front(100); //100 10 20 30
    dq.push_front(200);// 200 100 10 20 30
    dq.push_front(300);//300 200 100 10 20 30
    dq.pop_back();// 300 200 100 10 20 
    dq.pop_front();//200 100 10 20
    cout<<"Size: "<<dq.size()<<endl;
    cout<<"front: "<< dq.front()<<endl;
    cout<<"last: "<< dq.back()<<endl;
    if(dq.empty()==true){
        cout<<"Empty deque"<<endl;
    }
    else{
        cout<<"Not so"<<endl;
    }
    //can be iterated
    deque<int>::iterator it= dq.begin();
    while(it!= dq.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    //accessing particular using index
    cout<<dq[1]<<endl;
    cout<<dq.at(2)<<endl;
    dq.clear();
    cout<<"size after using clear(): "<<dq.size()<<endl;
    dq.insert(dq.begin(),101);
    cout<<dq[0]<<endl;
    cout<<"size after using insert(): "<<dq.size()<<endl;
    dq.erase(dq.begin(), dq.end());
    cout<<"size after using erase(): "<<dq.size()<<endl;
    return 0;
}