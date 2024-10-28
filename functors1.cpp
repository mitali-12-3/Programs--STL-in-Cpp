#include<iostream>
#include<vector>
using namespace std;
class functor1{
    public:
        //OPERATOR OVERLOADING
        bool operator()(int a, int b){
            //compare in descending order
            //if a>b then true, a to be placed b4 b
            // a should be placed before b
            return a>b;
        }
};
int main(){
    functor1 cmp; //object can be used as a function
    if(cmp(0,5)){
        cout<<"A>B "<<endl;
    }
    else{
        cout<<"A<B"<<endl;
    }
    return 0;
}