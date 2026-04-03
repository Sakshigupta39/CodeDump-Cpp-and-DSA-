#include <iostream>
#include <string>
using namespace std;

class A{
private :
    int a_ka_private;
protected:
    int a_ka_protected;
 public:
    int a_ka_public;
    A(){
        cout<<"A ka constructor"<<endl;
    }
};

class B : protected A {
 public:
    int b_ka_public;

    void show(){
        a_ka_protected = 5;
    }
    B(){
        cout<<"B ka constructor"<<endl;
    }

};

class C: public B{
public:
    int c_ka_private;

    void show(){
        a_ka_protected;
    }

    C(){
        cout<<"C ka constructor"<<endl;
    }

};

int main(){
    C c;
}