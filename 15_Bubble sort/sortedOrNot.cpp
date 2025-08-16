#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int arr[6]={5,4,6,3,2,1};
    int n = 6;
    bool flag = true;
    for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"sorted";
    else cout<<"unsorted";
}