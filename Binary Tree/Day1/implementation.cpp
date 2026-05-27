//creating binary tree
#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
//built a tree 
Node* buildTree(Node* root){
    cout<<"Enter data"<<endl;
    int data;
    root = new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter the data to insert in left"<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in left"<<endl;
    root->right=buildTree(root->right);
    return root;

}
int main(){
    
}
