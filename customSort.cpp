#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Comparator{
    public:
    //descending
        bool operator()(int a, int b){
            return a>b;
        }
};
int main(){
    vector<int>arr{20,10,15};
    sort(arr.begin(), arr.end(),Comparator());
    vector<int>::iterator it=arr.begin();
    while(it!=arr.end()){
        cout<<*it<<" ";
        it++;
    }
    return 0;
}
