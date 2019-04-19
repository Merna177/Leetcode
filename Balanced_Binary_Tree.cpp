/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        
        int left_height =height(root->left);
        int right_height = height(root->right);
        if(abs(left_height-right_height)<=1 && isBalanced(root->left) && isBalanced(root->right)){ 
            return true;
            
        }
        else {
            return false;
        }
    }
    
    int height(TreeNode * node){
        //base case that i reach the leaf 
        if(node == NULL)return 0;
        //get  height by get max of 2 children subtree
        return 1+max(height(node->left),height(node->right));
    }
};
