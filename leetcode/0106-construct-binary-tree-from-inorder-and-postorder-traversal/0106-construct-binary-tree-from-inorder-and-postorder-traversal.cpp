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
    unordered_map<int,int>m;
     int k;
    TreeNode * TreeCons(vector<int>& in, vector<int>& post, int l, int r){
        if (l > r) {
            return NULL;
        }
        TreeNode * T = new TreeNode(post[k]);
        int i = m[post[k]];
        k--;
        T -> right = TreeCons(in, post, i + 1, r);
        T -> left = TreeCons(in, post, l , i - 1);
        return T; 
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
      k = postorder.size() - 1;
        for (int i = 0; i < inorder.size(); i++) {
            m[inorder[i]] = i;
        }
        TreeNode *Root;
        Root = TreeCons(inorder, postorder, 0, inorder.size() - 1);

        return Root;


    }
};