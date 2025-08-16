#include <iostream>
#include <vector>
using namespace std;
int main (){ 
    vector <int> v(5,7); //v(initial size=5, each element has value=7)
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    

}