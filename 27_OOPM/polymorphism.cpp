#include <iostream>
using namespace std;
//operator overloading
class Complex{
    private:
    int real, img;
    public:
    Complex(int r=0, int i=0){
        real = r;
        img = i;
    }
    Complex operator + (Complex const &obj){
        Complex res;
        res.img = img + obj.img;
        res.real = real + obj.real;
        return res;
    }
    void display(){
        cout<<real<<"+ i"<<img<<endl;
    }
};
int main(){
    Complex c1(12,7);
    Complex c2(6,2);
    Complex c3= c1+c2;
    c3.display();
    return 0;
}

//function overloading
// class ApnaCollege {
//     public:
//     void fun() {
//         cout<<"I am a function with no arguments"<<endl;
//     }
//     void fun(int x){
//         cout<<"i am a function with int argument"<<endl;
//     }
//     void fun(double x){
//         cout<<"I am a function with double argument"<<endl;
//     }
// };
// int main(){
//     ApnaCollege obj;
//     obj.fun();
//     obj.fun(4);
//     obj.fun(7.4);
// }