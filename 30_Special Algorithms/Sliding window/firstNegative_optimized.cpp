#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int m = n-k+1;
    int ans[m];
    int p = -1;

    //First window
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            p = i;
        }
    }
    //filling first element of ans
    if(p==-1) ans[0] = 1;
    else ans[0] = arr[p];
    
    //Sliding window
    int i=1, j=k;
    while(j<n){
        if(p>=i) ans[i] = arr[p];
        else{
            p = -1;
            for(int x=i;x<=j;x++){
                if(arr[x] <0) {
                    p = x;
                    break;
                }
            }
            if(p!=-1) ans[i] = arr[p];
            else ans[i] = 1;
        }
        i++;
        j++;
    }

    //print ans array
    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
}