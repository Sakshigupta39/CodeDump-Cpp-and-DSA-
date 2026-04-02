#include <iostream>
using namespace std;
void  countAndSay(int n){
    if(n==0) return;
    cout<<n;
    countAndSay(n-1);
    cout<<n;
    countAndSay(n-1);
    cout<<n;
}
int main(){
    int arr[]={23,434,45,45,5,656,76776,67,64,43,4323};
    int n = 11;
    for(int i=0;i<n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}