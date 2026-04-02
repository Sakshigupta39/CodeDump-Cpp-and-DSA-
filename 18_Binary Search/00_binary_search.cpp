#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int> &arr, int target){
    int n = arr.size();
    int lo=0, hi = n-1;
    
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] > target) hi = mid -1;
        else lo = mid+1;
    }
    return -1;

}

int main(){
    vector<int> arr = {2,4,6,8,10,12,13,16};
    int target = 4;
    cout<<binarySearch(arr, target);
}