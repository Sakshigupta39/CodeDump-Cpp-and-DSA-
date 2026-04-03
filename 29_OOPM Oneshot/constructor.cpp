#include <iostream>
using namespace std;

class Student{
    public:
    int rollno;
    string name;
    float cgpa;
    int age;

    Student(int r, string n, float cg){
        rollno =r;
        name = n;
        cgpa =cg ;
    }
    Student(int r, string n, float cg, int a){
        rollno =r;
        name = n;
        cgpa =cg ;
        age = a;
    }


};
int main(){
    Student s1(23,"raj",5.7);
    s1.cgpa=6.7; //value override

    Student s2(13,"raghav",7.7);

    Student s3(43,"Salsi",8.9,20); //ye apna matching constructor dhundega aur kam pe lag jayga

    Student s4 = s1; //Deep copy
    s4.name="Sak";
    
    Student s5(s2);
    s5.name="Adi"; //Copy constructor
    
    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.cgpa<<endl;
    cout<<s3.name<<" "<<s3.rollno<<" "<<s3.cgpa<<" "<<s3.age<<endl;
    cout<<s4.name<<" "<<s4.rollno<<" "<<s4.cgpa<<endl;
    cout<<s5.name<<" "<<s5.rollno<<" "<<s5.cgpa<<endl;

}