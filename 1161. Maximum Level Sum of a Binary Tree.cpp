#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int ans = -1;
        int lvl = 0;
        int maxSum = INT_MIN;
        
        vector<TreeNode*> currentLevel;
        vector<TreeNode*> nextLevel;
        
        currentLevel.push_back(root);
        
        while (!currentLevel.empty()) {
            lvl++;
            int temp = 0;
            
            for (TreeNode* node : currentLevel) {
                temp += node->val;
                
                if (node->left)
                    nextLevel.push_back(node->left);
                
                if (node->right)
                    nextLevel.push_back(node->right);
            }
            
            if (temp > maxSum) {
                ans = lvl;
                maxSum = temp;
            }
            
            currentLevel = nextLevel;
            nextLevel.clear();
        }
        
        return ans;
    }
};
