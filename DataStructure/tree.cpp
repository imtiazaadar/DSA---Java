/*
* Imtiaz Adar
*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data = data;
            this->left = this->right = NULL;
        }
};
Node* Insert(Node* root, int data){
    if(root == NULL) root = new Node(data);
    if(root->data > data){
        root->left = Insert(root->left, data);
    }
    else if(root->data < data){
        root->right = Insert(root->right, data);
    }
    return root;
}
void Inorder(Node* root){
    if(root != NULL){
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
}
void Preorder(Node* root){
    if(root != NULL){
        cout << root->data << " ";
        Preorder(root->left);
        Preorder(root->right);
    }
}
void Postorder(Node* root){
    if(root != NULL){
        Postorder(root->left);
        Postorder(root->right);
        cout << root->data << " ";
    }
}
int main(){
    Node* root = NULL;
    root = Insert(root, 13);
    Insert(root, 33);
    Insert(root, 21);
    Insert(root, 12);
    Insert(root, 15);
    Insert(root, 34);
    cout << "INORDER : ";
    Inorder(root);
    cout << endl;
    cout << "PREORDER : ";
    Preorder(root);
    cout << endl;
    cout << "POSTORDER : ";
    Postorder(root);
    cout << endl;
    return 0;
}
