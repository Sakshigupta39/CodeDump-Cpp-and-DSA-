#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s = "AZYUFDSXYZYZX";
    cout<<"String = "<<s<<endl;
    string str = "";
    for(int i=0;i<s.size();i++){
        if(s[i]>='X') str.push_back(s[i]);
        
    }
    cout<<str<<endl;
    for(int i=0;i<str.size();i++){
        for(int j=0;j<(str.size())-1;j++)
        
        if(str[j]<str[j+1]) swap(str[j],str[j+1]);
    }
    cout<<"Sorted String = "<<str;
}