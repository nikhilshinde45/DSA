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
//   TreeNode* helper(TreeNode* &root,int &key){
//     if(root->left->val==key) return root;
//     if(root->right->val==key) return root;
//     if(root==NULL) return NULL;

//     helper(root->left,key);
//     helper(root->right,key);
//    return NULL;
//   }
pair<TreeNode*,int>help(TreeNode* root){
    if(root==NULL){
        return {NULL,0};
    }
    auto L=help(root->left);
    auto R=help(root->right);
    if(L.second==R.second){
        return {root,L.second+1};
    }
    if(L.second>R.second){
        return {L.first,L.second+1};
    }
    return {R.first,R.second+1};
}

    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        
    return help(root).first;

    }
};j