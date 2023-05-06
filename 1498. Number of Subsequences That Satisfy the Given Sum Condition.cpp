#include<bits/stdc++.h>
using namespace std;

#define mod 10000000007
class Solution {
public:
    long help(int x, int y){
        if(y==1) return x;
        if(y==0) return 1;
        long ans = 1;
        if(y%2==0){
            ans = help(x,y/2);
            ans*=ans;
        }
        else{
            ans = help(x,y-1);
            ans*=x;
        }
        return ans % mod;
    }
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int s = 0, e=n-1;
        int ans = 0;
        while(s<=e){
            if(nums[s]+nums[e]<=target){
                ans+=help(2,e-s);
                ans%=mod;
                s++;
            }
            else{
                e--;
            }
        }
        return ans;
    }
};


/*

nums = [3, 1, 2, 4] and target = 4

Iteration 1:
s = 0, e = 3, nums[s] + nums[e] = 3 + 4 = 7 > target, e = 2
ans = 0

Iteration 2:
s = 0, e = 2, nums[s] + nums[e] = 3 + 2 = 5 > target, e = 1
ans = 0

Iteration 3:
s = 0, e = 1, nums[s] + nums[e] = 3 + 1 = 4 <= target
count = help(2, e-s) = help(2, 1) = 2^2 = 4
ans = (0 + 4) % mod = 4
s = 1

Iteration 4:
s = 1, e = 1, nums[s] + nums[e] = 1 + 1 = 2 <= target
count = help(2, e-s) = help(2, 0) = 1
ans = (4 + 1) % mod = 5
s = 2

Iteration 5:
s = 2, e = 1, nums[s] + nums[e] = 3 < target, e = 1
ans = 5

Iteration 6:
s = 2, e = 1, nums[s] + nums[e] = 3 < target, e = 0
ans = 5

Final answer: 5

*/