#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[7] = {'a','b','c','d','e','f'};
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
    cout<<str<<endl;

    char str1[] = "abcde";  //string literals - Isko change ni kr skte
    for(int i=0;i<6;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<str1[3]<<endl;  //stored in contigous memory

    char str2[23];
    cout<<"Enter char array: ";
    // cin>>str2;
    
    cin.getline(str2,23);
    cout<<str2;
    // cout<<strlen(str1)<<endl;  //print length

}