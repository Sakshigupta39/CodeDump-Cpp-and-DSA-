#include <iostream>
#include <vector>
using namespace std;
int main (){ 
    vector<int> v;  //you need not mention size
    v.push_back(3); //while inserting or input do not use []
    cout<<v.size()<<endl;
    v.push_back(4);
    cout<<v.size()<<endl;
    v.push_back(8);
    cout<<v.size()<<endl;
    v.push_back(1);
    cout<<v.size()<<endl;
    v.push_back(9);
    cout<<v.size()<<endl;

    // if you want to update or access you can use []
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4]<<" ";
    
}