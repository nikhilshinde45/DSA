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
   void tsum(TreeNode* root,int &tosum){
    
    if(root==NULL) return ;
    tosum+=root-> val;
    tsum(root->left,tosum);
    tsum(root->right,tosum);
   }
   int helper(TreeNode* root,int &tosum,long long int &maxi){
    if(root==NULL){
        return 0;
    }
    int ssum=root->val;
    ssum+=helper(root->left,tosum,maxi);
        ssum+=helper(root->right,tosum,maxi);
        maxi=max(maxi,ssum*1LL*(tosum-ssum));
        return ssum;

   }
    int maxProduct(TreeNode* root) {
        int tosum=0;
        const int mod=1e9 + 7;
        long long int maxip=0;
        tsum(root,tosum);
        helper(root,tosum,maxip);
        return maxip%mod;


        
    }
};