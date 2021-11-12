#include<bits/stdc++.h>
using namespace std;

class Tree {
    public:
        int data;
        Tree* left;
        Tree* right;
};

Tree* newNode(int data) {
    Tree* node = new Tree();
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void countNodes(Tree* root, int &count) {
    if(root == NULL) 
        return;

    countNodes(root->left, count);
    countNodes(root->right, count);
    count++;
}

int main() {
    Tree* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(9);
    root->right->right = newNode(8);
    root->left->left->left = newNode(6);
    root->left->left->right = newNode(7);

    int count = 0;
    countNodes(root, count);

    cout<<"Total number of Nodes are: "<<count<<endl;

    return 0;
}