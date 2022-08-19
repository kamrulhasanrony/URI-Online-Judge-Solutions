/* 1200 - BST Operations I */

#include<bits/stdc++.h>
using namespace std;

bool b;
struct node
{
    char data;
    struct node *left;
    struct node *right;
};

struct node* newnode(int item)
{
    struct node *temp = new struct node();
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

struct node* insert(struct node *root, int item)
{
    if(root==NULL)
    {
        return newnode(item);
    }
    if(item<=root->data)
    {
        root->left = insert(root->left, item);
    }
    else if(item>root->data)
    {
        root->right = insert(root->right, item);
    }
    return root;
}
bool lookup(struct node* root, int target)
{
    if (root == NULL)
    {
        return false;
    }
    else
    {
        if (target ==root->data)
        {
            return true;
        }
        else
        {
            if (target < root->data)
                return lookup(root->left, target);
            else
                return lookup(root->right, target);
        }
    }
}
void printinorder(struct node *root)
{
    if(root==NULL)
        return;
    printinorder(root->left);
    if(b)
    {
        printf("%c",root->data);
        b =false;
    }
    else
    {
        printf(" %c",root->data);
    }
    printinorder(root->right);
}
void printpreorder(struct node *root)
{
    if(root==NULL)
        return;
    if(b)
    {
        printf("%c",root->data);
        b =false;
    }
    else
    {
        printf(" %c",root->data);
    }
    printpreorder(root->left);

    printpreorder(root->right);
}

void printpostorder(struct node *root)
{
    if(root==NULL)
        return;
    printpostorder(root->left);
    printpostorder(root->right);
    if(b)
    {
        printf("%c",root->data);
        b =false;
    }
    else
    {
        printf(" %c",root->data);
    }
}

int main()
{
    struct node *root = NULL;
    string s;
    while(getline(cin, s))
    {
        if(s=="INFIXA")
        {
            b=true;
            printinorder(root);
            printf("\n");
        }
        else if(s=="PREFIXA")
        {
            b=true;
            printpreorder(root);
            printf("\n");
        }
        else if(s=="POSFIXA")
        {
            b=true;
            printpostorder(root);
            printf("\n");
        }
        else if(s[0] == 'P' && s[1] == ' ')
        {
            if(lookup(root, s[2]))
                printf("%c existe\n", s[2]);
            else
                printf("%c nao existe\n", s[2]);
        }
        else
        {
            root = insert(root, s[2]);
        }
    }
    return 0;
}
