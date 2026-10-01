/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
vector<int>ans;
    void Helper(Node * T) {
        if (T != NULL) {
            for (int i = 0; i < T->children.size(); i++){
                Helper(T ->children[i]);
            }
        ans.push_back(T -> val);
        }
    }
    vector<int> postorder(Node* root) {
        Helper(root);
        return ans;
    }
};