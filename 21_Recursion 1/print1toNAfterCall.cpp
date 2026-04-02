#include <iostream>
using namespace std;
// void print(int n){
//     if(n==0) return; //base case
//     print(n-1); //recursive call
//     cout<<n<<endl;   //kaam
// }
// int main(){
//     print(6);
// }

void print(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);
}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(1,n);
}