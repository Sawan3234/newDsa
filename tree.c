#include <stdio.h>
#include <stdlib.h>
struct BTreeNode
{
int data;
struct BTreeNode *left;
struct BTreeNode *right;
};
typedef struct BTreeNode BinaryTree;
BinaryTree *createNode(int data)
{
BinaryTree *newNode = (BinaryTree *)malloc(sizeof(BinaryTree));
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}
// Function to insert a node into a BST
BinaryTree *insert(BinaryTree *root, int data)
{
if (root == NULL)
return createNode(data);
if (data < root->data)
root->left = insert(root->left, data);
else if (data > root->data)
root->right = insert(root->right, data);
return root;
}
void inorderTraversal(BinaryTree *root)
{
if (root != NULL)
{
inorderTraversal(root->left);
printf("%d ", root->data);
inorderTraversal(root->right);
}
}
void preorderTraversal(BinaryTree *root)
{
if (root != NULL)
{
printf("%d ", root->data);
preorderTraversal(root->left);
preorderTraversal(root->right);
}
}
void postorderTraversal(BinaryTree *root)
{
if (root != NULL)
{
postorderTraversal(root->left);
postorderTraversal(root->right);
printf("%d ", root->data);
}
}
void main()
{
BinaryTree *root = NULL;
int choice, data;
do
{
printf("\nEnter:\n1.Insertion Node\n2.Inorder Traversal\n3.Preorder Traversal\n4.Postorder Traversal\n");
printf("Enter your choice:\n");
scanf("%d", &choice);
switch (choice)
{
case 1:
printf("\nEnter number to insert in BST:\n");
scanf("%d", &data);
root = insert(root, data);
break;
case 2:
printf("The inorder traversal of elements is:\n");
inorderTraversal(root);
break;
case 3:
printf("The preorder traversal of elements is:\n");
preorderTraversal(root);
break;
case 4:
printf("The postorder traversal of elements is:\n");
postorderTraversal(root);
break;
default:
printf("Invalid Choice");
}
} while (choice < 5);
}