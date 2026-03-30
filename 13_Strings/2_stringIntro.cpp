#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Sakshi Gupta";  //this is dynamic in nature
    // char array cant be changed afterwards
    cout<<str<<endl;

    str = "Sakshi";
    cout<<str<<endl;

    string str1 = "Sakshi";
    string str2 = "Gupta";

    cout<<(str1 == str2)<<endl;
    cout<<(str1 > str2)<<endl;

    string str3;
    getline(cin,str3);
    cout<<str3;
}