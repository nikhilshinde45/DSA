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
void helper(TreeNode* root,vector<int>&inorder){
    if(root==NULL) return ;
    helper(root->left,inorder);
    inorder.push_back(root->val);
    helper(root->right,inorder);
   
}
TreeNode* createbst(vector<int>&inorder,int low,int high){
    if(low>high) return NULL;
    int mid = low+(high-low)/2;
    TreeNode * root = new TreeNode(inorder[mid]);
    root->left = createbst(inorder,low,mid-1);
    root->right = createbst(inorder,mid+1,high);

    return root ;
}
    TreeNode* balanceBST(TreeNode* root) {
       vector<int>inorder;
       helper(root,inorder);
       int k = inorder.size();

       return createbst(inorder,0,k-1);
        
    }
};