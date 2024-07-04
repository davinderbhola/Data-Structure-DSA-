// Binary Search Tree operations in C

#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct node
{
  int key;
  struct node *left, *right;
};

struct node *newNode(int item)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// preorder Traversal
void preorder(struct node *root)
{
  if (root != NULL)
  {
    // Traverse root
    printf("%d -> ", root->key);

    // Traverse left
    preorder(root->left);

    // Traverse right
    preorder(root->right);
  }
}

// Insert a node
struct node *insert(struct node *node, int key)
{
  // Return a new node if the tree is empty
  if (node == NULL) return newNode(key);

  // Traverse to the right place and insert the node
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}


int main() 
{
  struct node *root = NULL;
  root = insert(root, 8);
  root = insert(root, 3);
  root = insert(root, 1);
  root = insert(root, 6);
  root = insert(root, 7);
  root = insert(root, 10);
  root = insert(root, 14);
  root = insert(root, 4);

  printf("Inorder traversal: ");
  preorder(root);
 
  getch();
}