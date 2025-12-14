#include <iostream>
using namespace std;
void display(int* a,int size){
    for (int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[], int size){    //int b[] ki jagah aagr int* b likh de to no problem
    b[0] = 100;
}
int main(){
    int arr[] = {1,4,2,7,46};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    display(arr,size);
    change(arr,size);
    display(arr,size);
}