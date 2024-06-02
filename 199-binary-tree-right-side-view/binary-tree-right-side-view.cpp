/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        if (root == nullptr)
            return ans;
        while (1) {
            int size = q.size();
            vector<int> data;
            if (size == 0)
                return ans;
            while (size > 0) {
                TreeNode* temp = q.front();
                q.pop();
                data.push_back(temp->val);
                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right)
                    q.push(temp->right);
                --size;
            }
            ans.push_back(data);
        }
        return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> ans = levelOrder(root);
        vector<int> rightNodes;
        for (vector<int> vec : ans) {
            rightNodes.push_back(vec[vec.size() - 1]);
        }
        return rightNodes;
    }
};