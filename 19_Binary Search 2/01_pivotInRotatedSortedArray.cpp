#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> &arr){
    int n = arr.size();
    int lo =0, hi = n-1;

    while(lo<hi){
        int mid = lo +(hi-lo)/2;
        if(arr[mid] >= arr[hi]) lo = mid+1;
        else hi = mid;
    }
    return lo;

}

int main(){
    vector<int> arr = {4,5,6,7,0,1,2};

    cout<<findPivot(arr);
}