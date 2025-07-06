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
class Solution {
public:
    int maxd;
    int diameterOfBinaryTree(TreeNode* root) {
        depth(root);
        return maxd;
    }

    int depth(TreeNode* node){
        if(node== nullptr) return 0;
        int LH = depth(node->left);
        int RH = depth(node->right);
        maxd = max(maxd, LH + RH); 
        return max(LH, RH) +1;
    }
};