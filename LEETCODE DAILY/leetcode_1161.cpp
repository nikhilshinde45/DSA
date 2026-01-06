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
    int maxLevelSum(TreeNode* root) {
        
        queue<TreeNode*>qu;
        int cnt=0;
        long long  maxisum=LLONG_MIN;
        qu.push(root);
      
        int k=0;
        while(!qu.empty()){
            int n=qu.size();
            long long sum=0;
            cnt++;
            for(int i=0;i<n;i++){
                 TreeNode* node=qu.front();
            qu.pop();
            sum+=node->val;
            if(node->left){
                qu.push(node->left);
               // s+=node->left->val;
            }if(node->right){
                qu.push(node->right);
               // s+=node->right->val;

            }
            }
           
           
            if(maxisum<sum){
                maxisum=sum;
                k=cnt;
            }
           

        }
        
        return k;
    }
    
};