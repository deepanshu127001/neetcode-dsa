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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int level=0;

        vector<vector<int>> ans;
        queue<TreeNode*> q;

        if(root==nullptr)return ans;
        q.push(root);
        while(1){
            int q_size=q.size();
            vector<int> data;
            if(q_size==0)return ans;
            ++level;
            while(q_size>0){
                TreeNode *tempNode = q.front();
                q.pop();
                data.push_back(tempNode->val);
                if(tempNode->left)q.push(tempNode->left);
                if(tempNode->right)q.push(tempNode->right);
                q_size--;
            }
            if(level%2==0){
            reverse(data.begin(),data.end());
            ans.push_back(data);

            }
            else{
                ans.push_back(data);
            }
        }
        return ans;
    }
};