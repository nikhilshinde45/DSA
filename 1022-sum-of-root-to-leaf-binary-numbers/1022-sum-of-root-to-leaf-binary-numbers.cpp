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
// int converttoint(string &res){

//     int ans = 0;
//     for(char ch:res){
//          ans = 2 * ans + (ch - '0');
//     }

//     return ans;

// }
// void helper(TreeNode* root , string res,vector<string>&paths){
//     if(root->left == NULL && root->right == NULL){

//         res += (root->val + '0');

//         paths.push_back(res);
//         return ;

//     }

//     if(root->left){
//         res   += (root->val + '0');
//        helper(root->left,res,paths);
//        res.pop_back();
//     }
//     if(root->right){
//          res += (root->val + '0');
//        helper(root->right,res,paths);
//        res.pop_back();

//     }
//     return ;
// }
int helper(TreeNode* root , int curr){
    if(!root) return 0 ;

    curr = 2 * curr + root->val;

    if(!root->left && !root->right) return curr;

    return helper(root->left , curr) + helper(root->right , curr);
}
    int sumRootToLeaf(TreeNode* root) {

        return helper(root , 0);

    // vector<string>allpaths ;
    // helper(root,"",allpaths);
    // // for(auto i:allpaths){
    // //     cout<<i<<" ";
    // // }
    // // cout<<endl;
    // int sum = 0;
    // for(auto i : allpaths){
    //     sum += converttoint(i);
    // }

    // return  sum;

        
    }
};