#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<"top: "<< st.top()<<endl;
    cout<<"size: "<<st.size()<<endl;
    st.pop();
    cout<<"top: "<< st.top()<<endl;
    cout<<"size: "<<st.size()<<endl;
    st.pop();
    cout<<"top: "<< st.top()<<endl;
    cout<<"size: "<<st.size()<<endl;
    stack<int>first;
    stack<int>second;
    first.push(90);
    first.push(91);
    second.push(20);
    second.push(21);
    cout<<"Before swap: "<<endl;
    cout<<"first top: "<< first.top()<<endl;
    cout<<"second top: "<< second.top()<<endl;
    first.swap(second);
    cout<<"After swap: "<<endl;
    cout<<"first top: "<< first.top()<<endl;
    cout<<"second top: "<< second.top()<<endl;
    return 0;
}