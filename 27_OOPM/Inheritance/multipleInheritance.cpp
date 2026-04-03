#include <iostream>
using namespace std;

class A{
public :
    A(){
        cout<<"A ka constructor"<<endl;
    }
};

class B  {
 public :
    B(){
        cout<<"B ka constructor"<<endl;
    }

};

class C: public B, public A {
public:
    C(){
        cout<<"C ka constructor"<<endl;
    }

};

int main(){
    C c;
}