#include<iostream>
#include<vector>
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
class StudentComparator{
    public:
        bool operator()(Student a, Student b){
            return a.marks< b.marks;
        }
};
int main(){
    Student s1;
    Student s2;
    s1.marks=93;
    s1.name="Mitali";
    s2.marks=33;
    s2.name="Ansh";
    StudentComparator cmp;
    if(cmp(s1,s2)){
        cout<<"Mitali ke marks kam ansh se"<<endl;
    }
    else{
        cout<<"Ansh ke marks kam mitali se"<<endl;
    }
    return 0;
}