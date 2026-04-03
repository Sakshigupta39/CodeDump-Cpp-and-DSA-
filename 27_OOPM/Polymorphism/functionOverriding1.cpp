#include <iostream>
using namespace std;

class A{
public:
    void show(){
        cout<<"A ka show"<<endl;
    }
};

class B : public A{
public:
    void show(){
        cout<<"B ka show"<<endl;
    }
};

int main(){
    A a;
    a.show();
    B b;
    b.show();
    b.A::show();
}
