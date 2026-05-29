/*************************************************************
    Following is the Binary Serach Tree node structure

    template <typename T>
    class TreeNode
    {
    public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*************************************************************/
void inOrder(TreeNode<int> *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left, ans);
    ans.push_back(root->data);
    inOrder(root->right, ans);
}

TreeNode<int> *inOrderToBST(int s, int e, vector<int> &ans)
{

    if (s > e)
    {
        return NULL;
    }

    int mid = s + (e - s) / 2;

    TreeNode<int> *root = new TreeNode<int>(ans[mid]);

    root->left = inOrderToBST(s, mid - 1, ans);
    root->right = inOrderToBST(mid + 1, e, ans);

    return root;
}

TreeNode<int> *balancedBst(TreeNode<int> *root)
{

    vector<int> ans;

    inOrder(root, ans);

    return inOrderToBST(0, ans.size() - 1, ans);
}