#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));

        int lb = 0, ub = n - 1, a = 1;
        while (lb <= ub) {
            for (int i = lb; i <= ub; i++) {
                ans[lb][i] = a++;
            }
            for (int i = lb + 1; i <= ub; i++) {
                ans[i][ub] = a++;
            }
            for (int i = ub - 1; i >= lb; i--) {
                ans[ub][i] = a++;
            }
            for (int i = ub - 1; i > lb; i--) {
                ans[i][lb] = a++;
            }
            lb++;
            ub--;
        }
        return ans;
    }
};
