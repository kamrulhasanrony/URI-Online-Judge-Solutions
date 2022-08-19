/* 1201 - BST Operations II */

#include<bits/stdc++.h>
using namespace std;

bool b;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* h;
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
    if(item<root->data)
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
void findPreSuc(struct node* root, struct node*& pre, struct node*& suc, int key)
{
    // Base case
    if (root == NULL)
        return ;

    // If key is present at root
    if (root->data == key)
    {
        // the maximum value in left subtree is predecessor
        if (root->left != NULL)
        {
            struct node* tmp = root->left;
            while (tmp->right)
                tmp = tmp->right;
            pre = tmp ;
        }
        return ;
    }

    // If key is smaller than root's key, go to left subtree
    if (root->data > key)
    {
        suc = root ;
        findPreSuc(root->left, pre, suc, key) ;
    }
    else // go to right subtree
    {
        pre = root ;
        findPreSuc(root->right, pre, suc, key) ;
    }
}
struct node* deleteNode(struct node* root, int key)
{
    /// base case
    if (root == NULL)
        return root;

    /// If the key to be deleted is smaller than the root's key,
    /// then it lies in left subtree
    if (key < root->data)
        root->left = deleteNode(root->left, key);

    /// If the key to be deleted is greater than the root's key,
    /// then it lies in right subtree
    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    /// if key is same as root's key, then This is the node
    /// to be deleted
    else
    {
        /// node with only one child or no child
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        /// node with two children: Get the inorder successor (smallest
        /// in the right subtree)
    struct node* pre = NULL, *suc = NULL;
    findPreSuc(root, pre, suc, root->data);
        struct node* temp = pre;

        /// Copy the inorder successor's content to this node
        root->data = temp->data;

        /// Delete the inorder successor
        root->left = deleteNode(root->left, temp->data);
    }
    return root;
}
int n,passos;
void pre(struct node* h1)
{
    if (h1)
    {
        if (passos > 0)
            cout << ' ';
        passos++;
        cout << h1->data;
        pre(h1->left);
        pre(h1->right);
    }
}
void inf(struct node* h1)
{
    if (h1)
    {
        inf(h1->left);
        if (passos > 0)
            cout << ' ';
        passos++;
        cout << h1->data;
        inf(h1->right);
    }
}
void pos(struct node* h1)
{
    if (h1)
    {
        pos(h1->left);
        pos(h1->right);
        if (passos > 0)
            cout << ' ';
        passos++;
        cout << h1->data;
    }
}
int main()
{
    char c;
    char s[50];
    int info;
    h = NULL;
    n = 0;
    while((scanf("%c", &c) != EOF))
    {
        if (c == 'I')
        {
            c = getchar();
            if (c == ' ')
            {
                scanf("%d", &info);
                h = insert(h, info);
                n++;
            }
            else
            {
                scanf("%s", s);
                passos = 0;
                inf(h);
                cout << '\n';
            }
        }
        else if (c == 'P')
        {
            c = getchar();
            if (c == ' ')
            {
                scanf("%d", &info);
                cout << info << ' ';
                b = false;
                b=lookup(h, info);
                if (!b)
                    cout << "nao ";
                cout << "existe\n";
            }
            else
            {
                scanf("%s", s);
                passos = 0;
                if (strcmp(s, "EFIXA") == 0)
                    pre(h);
                else
                    pos(h);
                cout << '\n';
            }
        }
        else
        {
            scanf("%d", &info);
            h = deleteNode(h, info);
            n--;
        }
        getchar();
    }
}
