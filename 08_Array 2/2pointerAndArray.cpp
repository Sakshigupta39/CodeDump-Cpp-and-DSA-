#include <iostream>
using namespace std;
int main (){
    int arr[]= {34,45,56,67,67,44,34};
    int* ptr = arr; //giving address
    for(int i=0;i<=6;i++){
        cout<<*ptr<<" ";  //ptr[i] , i[ptr], i[arr] everything is valid (in place of *ptr)
        ptr++;
    }
    ptr = arr;
    *ptr = 8;
    ptr++;
    *ptr = 9;
    ptr--;
    cout<<endl;
    for(int i=0;i<=6;i++){
        cout<<*ptr<<" ";
        ptr++;
    }

    // cout<<ptr<<endl;
    // ptr[0]=4;
    // for(int i=0;i<=6;i++){
    //     cout<<ptr[i]<<" ";
    // }

}