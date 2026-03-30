#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str = "hello";
    cout<<str<<endl;
    int st = 0, e = str.length()-1;
    while(st<e){
        swap(str[st],str[e]);
        st++;
        e--;
    }
    cout<<str<<endl;
    //one line method
    reverse(str.begin(), str.end());
    cout<<str;

}