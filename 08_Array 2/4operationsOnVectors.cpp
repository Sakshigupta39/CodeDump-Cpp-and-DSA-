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
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}