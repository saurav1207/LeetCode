#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i=0; i<n; i++){
            if(nums[i]==0){
                return 0;
                break;
            }
            if(nums[i]<0){
                count++;
            }
        }
        // As we know, if there is even a pair of negative signs, then we can consider it positive, right?
        if(count % 2 == 0){
            return 1;
        }else{
            return -1;
        }
    }
};
