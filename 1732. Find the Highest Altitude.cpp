#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxHeight = 0;
        int currHeight = 0;
        int n = gain.size();
        for(int i=0; i<n; i++){
            currHeight += gain[i];
            if(currHeight > maxHeight){
                maxHeight = currHeight;
            }
        }
        return maxHeight;
        
    }
};