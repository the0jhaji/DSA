#include <iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};
Node* levelOrderTraversal(Node* root){
    if(root == NULL){
        return NULL;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            cout<<node->data<<" ";

        if(node->left){
            q.push(node->left);
        }
        if(node->right){
            q.push(node->right);
        }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
    return root;
}
//inorder traversal
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//preorder traversal
void preorder(Node* root){
    if(root == NULL){
        return;
    }   
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}
//postorder traversal   
void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
Node* insertIntoBST(Node* &root, int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }
    if(val < root->data){
        insertIntoBST(root->left, val);
    }
    else{
        insertIntoBST(root->right, val);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>> data;
    while(data != -1){
        insertIntoBST(root, data);
        cin>> data;
    
    }

}
int main(){
    Node* root = NULL;
    cout<<"Enter data to create BST"<<endl;
    takeInput(root);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    cout<<"Level Order Traversal"<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    return 0;

}