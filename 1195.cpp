/* 1195 - Binary Search Tree */

#include<bits/stdc++.h>

using namespace std;


struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create_node(int item)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = item;
    temp->left=NULL;
    temp->right=NULL;

    return temp;
}

struct node *insert(struct node *root, int data)
{
    if(root==NULL)
        return create_node(data);
    if(data<root->data)
    {
        root->left = insert(root->left, data);
    }
    else if(data>root->data)
    {
        root->right=insert(root->right, data);
    }
    return root;
}
void preorder(struct node* Node)
{
    if(Node==NULL)
        return;
    cout<<" "<<Node->data;
    preorder(Node->left);
    preorder(Node->right);
}

void inorder(struct node* Node)
{
    if(Node==NULL)
        return;
    inorder(Node->left);
    cout<<" "<<Node->data;
    inorder(Node->right);
}
void postorder(struct node* Node)
{
    if(Node==NULL)
        return;
    postorder(Node->left);
    postorder(Node->right);
    cout<<" "<<Node->data;

}


int main()
{
    int var;
    cin>>var;
    for(int j=1; j<=var; j++)
    {
        struct node* root = NULL;
        int test,first;
        cin>>test;
        for(int i=0; i<test; i++)
        {
            cin>>first;
            root = insert(root,first);
        }
        cout<<"Case "<<j<<":"<<endl;
        cout<<"Pre.:";
        preorder(root);
        cout<<endl;

        cout<<"In..:";
        inorder(root);
        cout<<endl;

        cout<<"Post:";
        postorder(root);
        cout<<endl<<endl;
    }
    return 0;
}
