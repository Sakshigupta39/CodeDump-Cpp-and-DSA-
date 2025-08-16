#include <iostream>
#include <vector>
using namespace std;

void change(vector<int> &a){
    a[0]=100;

    //pass by value ke liye neech vala loop use kro and reference ke liye sirf '&'laga do 'a' ke pehle
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
}

int main (){ 
    vector <int> v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(2);
    v.push_back(9);
    v.push_back(1);
     
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";  
    }
    cout<<endl;
    change(v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}