#include <iostream>
#include <vector>
using namespace std;
int main (){ 
    vector<int> v;  //you need not mention size
    v.push_back(3); //while inserting or input do not use []
    v.push_back(4);
    v.push_back(8);
    v.push_back(9);
    v.push_back(3); //while inserting or input do not use []
    v.push_back(4);
    v.push_back(8);
    v.push_back(9);
    v.push_back(3); //while inserting or input do not use []
    v.push_back(4);
    v.push_back(8);
    v.push_back(9);
    cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is "<<v.capacity()<<endl;
}