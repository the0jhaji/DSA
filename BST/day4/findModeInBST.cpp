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

class Solution
{
public:
    void inOrder(TreeNode *root, vector<int> &vals)
    {
        if (root == nullptr)
        {
            return;
        }

        inOrder(root->left, vals);
        vals.push_back(root->val);
        inOrder(root->right, vals);
    }

    vector<int> findMode(TreeNode *root)
    {
        vector<int> vals;
        inOrder(root, vals);

        unordered_map<int, int> freq;
        int maxFreq = 0;

        for (int x : vals)
        {
            freq[x]++;
            maxFreq = max(maxFreq, freq[x]);
        }

        vector<int> ans;

        for (auto &p : freq)
        {
            if (p.second == maxFreq)
            {
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};