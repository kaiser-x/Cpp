#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
};
node *createNode(int n)
{
    node *temp = new node();
    temp->data = n;
    temp->left = temp->right = NULL;
    return temp;
}
void Insert(node **root, int n)
{
    if (*root == NULL)
    {
        *root = createNode(n);
        return;
    }
    if (n <= (*root)->data)
        Insert(&(*root)->left, n);
    else
        Insert(&(*root)->right, n);
}
void print(node *root)
{
    if (root == NULL)
        return;
    print(root->left);
    cout << root->data << " ";
    print(root->right);
}
node *findLCA1(node *root, int a, int b)
{
    if (root == NULL)
        return root;
    if (a <= root->data && b <= root->data)
        return findLCA1(root->left, a, b);
    if (a > root->data && b > root->data)
        return findLCA1(root->right, a, b);
    return root;
}
int findLCA2(node *root, int a, int b)
{
    while(root!=NULL)
    {
        if(a<root->data && b<root->data)
            root=root->left;
        else if(a>root->data && b>root->data)
            root=root->right;
        else
            break;
    }
    return root->data;
}
int main()
{
    node *root = NULL;
    Insert(&root, 20);
    Insert(&root, 8);
    Insert(&root, 22);
    Insert(&root, 4);
    Insert(&root, 12);
    Insert(&root, 10);
    Insert(&root, 14);
    cout << "\nTree : " ;
    print(root);
    cout << "\nLCA : " << findLCA1(root, 4, 14)->data << endl;
    cout << "LCA : " << findLCA2(root, 4, 14)<< endl;
    return 0;
}
