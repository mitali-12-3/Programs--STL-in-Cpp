#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a= 2, b=3;
    cout<<"Min is "<< min(a,b)<<endl;
    cout<<"Max is "<< max(a,b)<<endl;
    vector<int>vec{2,3,4,10};
    cout<<"Min ele is: "<< *min_element(vec.begin(), vec.end())<<endl;
    cout<<"Max ele is: "<< *max_element(vec.begin(), vec.end())<<endl;
    return 0;
}