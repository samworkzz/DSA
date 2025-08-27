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
    TreeNode*maxValue(TreeNode*&root){
        if(root==NULL) return NULL;
        TreeNode*temp=root;
        while(temp->right!=NULL){
            temp=temp->right;
        }
        return temp;
    }
    TreeNode* deleteNode(TreeNode* &root, int key) {
        if(root==NULL) return NULL;

        if(root->val==key){
            // case1:
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            // case 2:
            else if(root->left!=NULL && root->right==NULL){
                TreeNode*child=root->left;
                delete root;
                return child;
            }
            // case 3;
            else if(root->left==NULL && root->right!=NULL){
                TreeNode*child=root->right;
                delete root;
                return child;
            }
            // case 4:
            else{
                TreeNode*maxNode=maxValue(root->left);
                root->val=maxNode->val;
                root->left=deleteNode(root->left,maxNode->val);
                return root;
            }
        }
        else if(root->val>key){
            root->left=deleteNode(root->left,key);
        }
        else{
            root->right=deleteNode(root->right,key);
        }
        return root;
    }
};