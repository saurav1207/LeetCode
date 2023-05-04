#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double average(vector<int>& s) {
        int n = s.size();
        sort(s.begin(), s.end());
        double avg = 0;
        for(int i=1; i<n-1; i++){
            avg += s[i];
        }
        avg = avg/(n-2);
        return avg;
    }
};