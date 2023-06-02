#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node*right;

    Node(int data){
        val = data;
        left = NULL;
        right=NULL;
    }
};

Node* buildTree(Node* root){
    int data;
    cout<<"Enter Data: "<<"\n";
    cin>>data;
    if(data==-1) return NULL;
    root = new Node(data);
    cout<<"Enter To Insert in Left Of "<< data <<"\n";
    root->left = buildTree(root);
    cout<<"Enter To Insert in Right Of "<< data <<"\n";
    root->right = buildTree(root);
    return root;

}
void Inorder(Node* root){
    if(root==NULL) return;
    Inorder(root->left);
    cout<<root->val;
    Inorder(root->right);
    
}
int main(){
    Node* root = NULL;
    root = buildTree(root);
    Inorder(root);
    return 0;
}