#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    //USING WHILE LOOP
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    vector<int>::iterator it=arr.begin();
    while(it!=arr.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    //USING FOR LOOP
    vector<int>array;
    array.push_back(101);
    array.push_back(201);
    array.push_back(301);
    vector<int>::iterator itr;
    for(itr=array.begin(); itr!= array.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    //USING itr->m way
    map<int,string>hsh;
    hsh.insert(make_pair(31,"love"));
    hsh.insert(make_pair(11,"cute"));
    hsh.insert(make_pair(1,"me"));
    map<int,string>::iterator itra=hsh.begin();
    while(itra!=hsh.end()){
        cout<<itra->first<<" ";
        cout<<itra->second<<" ";
        itra++;
    }
    cout<<endl;
    return 0;
}
