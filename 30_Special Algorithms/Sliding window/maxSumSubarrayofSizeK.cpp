#include <iostream>
using namespace std;

int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxIdx = -1;
    int maxSum = INT_MIN;
    for(int i=0;i<=n-k;i++){  //T.C = O((n-k) * k)
        int sum = 0;
        for(int j=i;j<i+k;j++){
            sum += arr[j];
        }
        if(maxSum<sum){
            maxSum = max(maxSum, sum);
            maxIdx = i;
        }
    }
    cout<<maxSum<<endl;
    cout<<maxIdx;
    //T.C = O(n*k)
}