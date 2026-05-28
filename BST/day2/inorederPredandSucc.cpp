/*************************************************************

    Following is the Binary Tree node structure

*************************************************************/

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    TreeNode *temp = root;

    int pred = -1;
    int succ = -1;

    // Find the key node
    while (temp != NULL && temp->data != key)
    {

        if (temp->data > key)
        {
            succ = temp->data;
            temp = temp->left;
        }
        else
        {
            pred = temp->data;
            temp = temp->right;
        }
    }

    // If key not found
    if (temp == NULL)
    {
        return {pred, succ};
    }

    // Predecessor = max value in left subtree
    TreeNode *leftTree = temp->left;

    while (leftTree != NULL)
    {
        pred = leftTree->data;
        leftTree = leftTree->right;
    }

    // Successor = min value in right subtree
    TreeNode *rightTree = temp->right;

    while (rightTree != NULL)
    {
        succ = rightTree->data;
        rightTree = rightTree->left;
    }

    return {pred, succ};
}