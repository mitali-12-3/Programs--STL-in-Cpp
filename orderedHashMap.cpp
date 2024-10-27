#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    map<int,string>tab;
    tab.insert(make_pair(4,"Mitali"));
    tab.insert(make_pair(3,"Mitu"));
    tab.insert(make_pair(1,"Mita"));
    tab.insert(make_pair(2,"Meth"));

    //sorted order based on keys:
    
    map<int,string>::iterator ita= tab.begin();
    while(ita!=tab.end()){
        cout<<(*ita).first<<"-->"<<(*ita).second<<endl;
        ita++;
    }

    //insertion n access complexity is log n 
    //MAKE_PAIR()
    map<string, string> table;// map by default is ordered
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

    map<string, string>::iterator it= table.begin();
    //way 1 to print via dereferencing
    while(it!=table.end()){
        cout<<(*it).first<<"-->"<<(*it).second<<endl;
        it++;
    }
    //way 2 to print via pair
    map<string, string>::iterator itr= table.begin();
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