#include <iostream>
using namespace std;

class Parent {
    public :
    void show(){
        cout<<"Base class"<<endl;
    }
};
class Child{
    public:
    void show(){
        cout<<"Derived class"<<endl;
    }
};

int main(){
    Child obj;
    Parent obj1;
    obj.show();
    obj1.show();
    return 0;
}