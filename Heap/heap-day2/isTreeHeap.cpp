class Solution
{
private:
    int countNode(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        return countNode(root->left) +
               countNode(root->right) + 1;
    }

    bool isCBT(Node *root, int index, int cnt)
    {
        if (root == NULL)
        {
            return true;
        }

        if (index >= cnt)
        {
            return false;
        }

        return isCBT(root->left, 2 * index + 1, cnt) &&
               isCBT(root->right, 2 * index + 2, cnt);
    }

    bool isMaxOrder(Node *root)
    {

        if (root == NULL)
        {
            return true;
        }

        if (root->left == NULL && root->right == NULL)
        {
            return true;
        }

        if (root->right == NULL)
        {
            return root->data > root->left->data;
        }

        return (root->data > root->left->data &&
                root->data > root->right->data &&
                isMaxOrder(root->left) &&
                isMaxOrder(root->right));
    }

public:
    bool isHeap(Node *tree)
    {

        int totalCount = countNode(tree);

        return isCBT(tree, 0, totalCount) &&
               isMaxOrder(tree);
    }
};