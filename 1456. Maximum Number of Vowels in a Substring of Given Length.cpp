#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int maxCount = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            switch(s[i]){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    count++;
                    break;
            }
            if(i >= k){
                switch(s[i-k]){
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                        count--;
                        break;
                }
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};
