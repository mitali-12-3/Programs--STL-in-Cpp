#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

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
          //min marks: high priority
            return a.marks<b.marks;  
    }
};
int main(){
    
    priority_queue<Student, vector<Student>,Comparator>pq;
    pq.push(Student(90,"Ansh"));
    pq.push(Student(27,"Akshat"));
    pq.push(Student(99,"Aviral"));
    pq.push(Student(82,"Sharma"));

    cout<< pq.top().marks<<" "<< pq.top().name<<endl;
    pq.pop();
    cout<< pq.top().marks<<" "<< pq.top().name<<endl;
    pq.pop();
    cout<< pq.top().marks<<" "<< pq.top().name<<endl;
    pq.pop();
    cout<< pq.top().marks<<" "<< pq.top().name<<endl;
    pq.pop();

    // priority_queue<int>pq;
    // // creates a deafult max heap

    // priority_queue<int, vector<int>, greater<int> >pq2;
    // // creates a min heap --> greater

    // priority_queue<int, vector<int>, less<int> >pq3;  
    // // max heap--> less 
    return 0;
}
