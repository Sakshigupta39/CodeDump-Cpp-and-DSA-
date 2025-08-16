#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //int n = nums.size();
        //2,2,1,1,1,2,2
        // for(int i=0;i<n;i++){
        //     int count = 1;
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==nums[j]) count++;
        //     }
        //     if(count>(n/2)) return nums[i];
        // }
        // return -1;
        sort(nums.begin(),nums.end());
        return nums[(nums.size())/2];
    }
};
}