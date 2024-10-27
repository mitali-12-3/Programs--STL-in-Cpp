#include<iostream>
#include<queue>
using namespace std;
int main(){
//MAX HEAP DECLARATION
    priority_queue<int>pq;
    //max heap by default--> highest priority
    pq.push(101);
    pq.push(224);
    cout<<"Current top in max-Heap "<<pq.top()<<endl;
    pq.push(9200);
    pq.push(230);
    cout<<"Current top in max-Heap "<<pq.top()<<endl;
    pq.pop();//highest gets popped
    cout<<"Current top in max-Heap after first pop(): "<<pq.top()<<endl;
    if(pq.empty()==true){
        cout<<"Empty pq "<<endl;
        cout<<" size is: "<< pq.size();
    }
    else{
        cout<<"not empty pq"<<endl;
        cout<<"size is: "<< pq.size();
    }
    cout<<endl;
//MIN HEAP DECLARATION

    priority_queue<int,vector<int>,greater<int>> pq2;
    pq2.push(9);
    pq2.push(21);
    pq2.push(7);
    cout<<"Min Heap top value: "<< pq2.top();
    pq2.pop();
    cout<<"\nAfter pop() top: "<< pq2.top()<<endl;
    return 0;
}