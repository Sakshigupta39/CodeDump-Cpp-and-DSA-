#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Sakshi Gupta";
    //Method 1
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    //Method 2
    for(char ch : str){
        cout<<ch<<" ";
    }

}