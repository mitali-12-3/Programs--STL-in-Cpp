#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // 10 20 30 40
    cout<< q.size()<<endl;
    q.pop();
    cout<< q.size()<<endl;
    if(q.empty())
        cout<< "Q is not empty"<<endl;
    else
        cout<<"Not empty"<<endl;
    cout<<"first: "<<q.front();
    cout<<"\nBack: "<<q.back()<<endl;

//swapping:
    queue<int>first;
    first.push(100);
    first.push(200);
    first.push(300);
    queue<int>second;
    second.push(401);
    second.push(402);
    second.push(403);
    first.swap(second);

    cout<< first.front()<< endl;
    cout<< second.front()<<endl;
    return 0;
}