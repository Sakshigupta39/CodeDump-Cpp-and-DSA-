#include <iostream>
using namespace std;

class Student{
    public:
    int rollno;
    string name;
    float cgpa;

};
int main(){
    Student s1;
    s1.rollno = 23;
    s1.name = "Raj";
    s1.cgpa = 6.7;
    Student s2;
    s2.rollno = 24;
    s2.name = "Raghav";
    s2.cgpa = 8.7;
    cout<<s1.name<<" "<<s1.cgpa<<" "<<s1.rollno<<endl;
    cout<<s2.name<<" "<<s2.cgpa<<" "<<s2.rollno<<endl;

}