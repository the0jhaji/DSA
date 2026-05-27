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
    TreeNode *minVal(TreeNode *root)
    {
        TreeNode *temp = root;

        while (temp->left != NULL)
        {
            temp = temp->left;
        }

        return temp;
    }

    TreeNode *deleteNode(TreeNode *root, int key)
    {

        if (root == NULL)
        {
            return root;
        }

        // node found
        if (root->val == key)
        {

            // 0 child
            if (root->left == NULL && root->right == NULL)
            {
                delete root;
                return NULL;
            }

            // 1 child (left)
            if (root->left != NULL && root->right == NULL)
            {
                TreeNode *temp = root->left;
                delete root;
                return temp;
            }

            // 1 child (right)
            if (root->left == NULL && root->right != NULL)
            {
                TreeNode *temp = root->right;
                delete root;
                return temp;
            }

            // 2 children
            if (root->left != NULL && root->right != NULL)
            {

                TreeNode *temp = minVal(root->right);

                root->val = temp->val;

                root->right = deleteNode(root->right, temp->val);

                return root;
            }

            return root;
        }

        else if (root->val > key)
        {
            root->left = deleteNode(root->left, key);
            return root;
        }

        else
        {
            root->right = deleteNode(root->right, key);
            return root;
        }
    }
};