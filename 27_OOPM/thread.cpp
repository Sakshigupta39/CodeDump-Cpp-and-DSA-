#include <iostream>
#include <thread>
using namespace std;
void func(int i){
    cout<<"Hello Multithreading "<<i<<endl;
}
int main () 
{
    thread t1(func,2);
    t1.join();
    // t1.detach();
    return 0;
} 