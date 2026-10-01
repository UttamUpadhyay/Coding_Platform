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
    vector<int>ans;
    void Helper(TreeNode * T) {
         if (T != NULL) {
        
       Helper(T -> left);
        ans.push_back(T -> val);
       Helper(T-> right);
    }
    }
    vector<int> inorderTraversal(TreeNode* root) {
      Helper(root);
      return ans;
       
    }
};