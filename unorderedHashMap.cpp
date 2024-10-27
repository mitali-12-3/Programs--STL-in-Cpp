#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){

    //MAKE_PAIR()
    unordered_map<string, string> table;//random order can be seen
    //METHOD-1
    table["in"]= "India";
    //METHOD-2
    table.insert(make_pair("en","England"));
    //METHOD-3
    pair<string, string> p;
    p.first="br";
    p.second="Brazil";
    table.insert(p);

    //ACCESSING VALUES BY USING KEYS
    cout<< "size: "<< table.size()<<endl;

    cout<<"using at(): "<< table["en"]<<endl;
    cout<<"using at(): "<< table.at("in")<<endl;

    //find()

    if(table.find("inr")!=table.end())
        cout<<"key found"<<endl;
    else
        cout<<"key not found"<<endl;

    //count()

    if(table.count("im")==0)
        cout<<"key not there"<<endl;
    if(table.count("im")==1)
        cout<<"found"<<endl;


    //MODIFY/UPDATE:

    table.at("br")="Brazilian";
    table["in"]="Indian";
    cout<<"After updating br index: "<<endl;
    cout<<"using at(): "<< table["br"]<<endl;
    cout<<"using at(): "<< table["in"]<<endl;

    unordered_map<string, string>::iterator it= table.begin();
    //way 1 to print via dereferencing
    while(it!=table.end()){
        cout<<(*it).first<<"-->"<<(*it).second<<endl;
        it++;
    }
    //way 2 to print via pair
    unordered_map<string, string>::iterator itr= table.begin();
    while(itr!=table.end()){
        pair<string,string>p=*itr;
        cout<<p.first<<"-->"<<p.second<<endl;
        itr++;
    }
    //CLEAR() & EMPTY()
 // table.erase(table.begin(), table.end());
    table.clear();
    cout<< "size after clear(): "<< table.size()<<endl;
    if(table.empty()==true)
        cout<<"Yes empty"<<endl;
    else
        cout<<"NOT"<<endl;
    return 0;
}