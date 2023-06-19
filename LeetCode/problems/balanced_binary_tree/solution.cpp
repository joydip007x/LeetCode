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
    
    int rec(TreeNode* root){
        if(root==NULL)return 0;
        int x=1+rec(root->left);
        int y=1+rec(root->right);
        // cout<<" ROOT "<<root->val<<" :  {x,y }:{"<<x<<","<<y<<"}\n";
        if(abs(x-y)>1) return -999999;
        return max(x,y);
    }
    bool isBalanced(TreeNode* root) {
        int p= rec(root);
        // cout<<p<<endl;
        return p>=0;
    }
};