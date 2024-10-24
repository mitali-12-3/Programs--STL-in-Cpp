#include<iostream>
#include<vector>
using namespace std;
int main(){
//PUSH_BACK(), POP_BACK(), BEGIN(), END(), SIZE(), CAPACITY(), CLEAR()
    vector<int>a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(100);
    a.push_back(200);
    
    cout <<"Begin() value for vector a: " <<*(a.begin()) << endl; 
    cout <<"End() value for vector a: " <<*(a.end()-1) << endl; 
    //don't use *(a.end()) because  this will give garbage value
    cout <<"Size() value for vector a: " <<a.size() << endl; 
    
    a.pop_back();
    a.pop_back();
    cout<<"After using pop_back():"<<endl;
    cout <<"Size() value for vector a: " <<a.size() << endl; 
    cout<<"Capacity() value for vector a: "<<a.capacity()<<endl;
    a.clear();
    cout<<"After using clear(), size is: "<<a.size()<<endl;
    
//EMPTY(), FOR EACH LOOP    
    vector<int>b1; //has no elements
    cout<< "Is b vector empty?(1/0)means(yes/no) "<< b1.empty()<<endl;
    vector<int>b2(10);//has 10 elements initialised to 0
    cout<< "Is b2 vector empty?(1/0)means(yes/no) "<< b2.empty()<<endl;
    cout<<b2.size()<<endl; //gives 10
    b1.push_back(10);
    b1.push_back(11);
    b1.push_back(12);
    b1.push_back(13);
    cout<<"Before inserting 25"<<endl;
    for(auto it: b1){
        cout<< it<< " ";
    }
    cout<<endl;
    cout<<"After 25 insertion:"<<endl;
    b1.insert(b1.begin(),25);
    for(auto it: b1){
        cout<< it<< " ";
    }
    cout<<endl;

//RESERVE(),MAX_SIZE(), FRONT(), BACK(), ERASE() IN VECTORS
    vector<int>c;
    cout<<"Capacity before reserving: "<< c.capacity()<<endl;
    c.reserve(10);
    cout<<"Capacity after reserving: "<< c.capacity()<<endl;
    c.push_back(10);
    c.push_back(20);
    c.push_back(30);
    c.push_back(40);
    cout<<"First element: "<< c.front()<<endl;
    cout<<"Last element: "<< c.back()<<endl;
    cout<< "Maximum size for vector: "<<c.max_size()<<endl;
    c.erase(c.begin(),c.end());
    cout<<"After using erase(), size is: "<<c.size()<<endl;
    
//TRAVERSING VIA ITERATOR
    
    vector<int> first;
    vector<int> second;

    first.push_back(21);
    first.push_back(22);
    first.push_back(23);
    first.push_back(24);
    cout<<"Traversing via iterator for first vector: "<<endl;
    vector<int>:: iterator it= first.begin();
    while(it!= first.end()){
        cout<< *it<<" ";
        it++;
    }    
    cout<<endl;

    second.push_back(31);
    second.push_back(32);
    second.push_back(33);
    second.push_back(34);

//SWAP() FUNCTION IN VECTORS 

    first.swap(second);
    //cout<< first[0] << " " << first[1] << " "<< first[2]<<" "<< first[3]<<" "<<endl;
    cout<<"Printing first vector:"<<endl;
    for(auto it: first){
        cout<< it<<" ";
    }
    cout<<endl;
    cout<<"Printing second vector: "<<endl;
    for(auto it: second){
        cout<< it<<" ";
    }
    cout<<endl;
   
    return 0;
}