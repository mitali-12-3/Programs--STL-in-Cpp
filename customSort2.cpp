#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Student{
    public:
        //OPERATOR OVERLOADING
        int marks;
        string name;
        //default constructor
        Student(){}
        //parameterized constrcutor
        Student(int a, string n){
            this-> marks= a;
            this-> name= n;
}
};
class Comparator{
    public:
        bool operator()(Student a, Student b){  
            if(a.marks==b.marks){
                //lexicographically
                return a.name<b.name;
            }
            return a.marks>b.marks;  
    }
};
int main(){
    vector<Student>arr;
    arr.push_back(Student(90,"Mitali"));
    arr.push_back(Student(95,"Ansh"));
    arr.push_back(Student(92,"Aryan"));
    arr.push_back(Student(92,"Aryu"));
    sort(arr.begin(), arr.end(), Comparator());
    for(Student a: arr){
        cout<<a.marks<<" "<< a.name<<endl;
    }
    return 0;
}
