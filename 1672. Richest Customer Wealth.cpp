#include<iostream>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row = accounts.size();
        int col = accounts[0].size();
        vector<int> wealths;
        
        for(int i = 0; i < row; i++) {
            int sum = 0;
            for(int j = 0; j < col; j++) {
                sum += accounts[i][j];
            }
            wealths.push_back(sum);
        }
        
        sort(wealths.begin(), wealths.end());
        
        return wealths.back();
    }
};
