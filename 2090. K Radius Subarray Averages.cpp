#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<ll> pref(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + nums[i - 1];
        }

        vector<int> avgs(n, 0);

        for (int i = 0; i < n; i++) {
            if (i - k >= 0 && i + k < n) {
                ll sum = pref[i + k + 1] - pref[i - k];
                avgs[i] = sum / (2 * k + 1);
            } else {
                avgs[i] = -1;
            }
        }

        return avgs;
    }
};
