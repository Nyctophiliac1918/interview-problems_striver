#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;
    
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node *insertNode(Node *root, int key)
{
    if(root==NULL)
        root=new Node(key);
        
    queue<Node *>q;
    q.push(root);
    
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        
        if(temp->left!=NULL)
            q.push(temp->left);
        else{
            temp->left=new Node(key);
            return root;
        }
        if(temp->right!=NULL)
            q.push(temp->right);
        else{
            temp->right=new Node(key);
            return root;
        }
    }
}

void inorder(Node *temp)
{
    if(temp==NULL)
        return;
    
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}

int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    root=insertNode(root,10);
    inorder(root);
}
