#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){

    //ORDERED SET

    set<int>st;
    st.insert(9);
    st.insert(3);
    st.insert(1);
    st.insert(1);

    cout<<st.size()<<endl;
    cout<<st.max_size()<<endl;

    set<int>::iterator it= st.begin();
    while(it!=st.end()){
        cout<<*it<<" ";
        it++;
    }//generates sorted order
    cout<<endl;

    if(st.find(9)!=st.end())
        cout<<"Found"<<endl;
    else
        cout<<"Not found"<<endl;

    if(st.count(89)==1)
        cout<<"Found"<<endl;
    if(st.count(89)==0)
        cout<<"Not found"<<endl;

    st.erase(st.begin(),st.end());
    cout<<st.size()<<endl; //0

    //UNORDERED SET
    unordered_set<int>set;
    set.insert(10);
    set.insert(15);
    set.insert(8);
    set.insert(4);
    
    unordered_set<int>::iterator itr= set.begin();
    while(itr!=set.end()){
        cout<<*itr<<" ";
        itr++;
    }//generates randsom value
    return 0;
}