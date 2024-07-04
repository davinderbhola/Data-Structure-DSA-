// Binary Search Tree operations in C

#include <stdio.h>
#include <stdlib.h>


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
void postorder(struct node *root)
{
  if (root != NULL)
  {
    // Traverse left
    postorder(root->left);

    // Traverse right
    postorder(root->right);

    // Traverse root
    printf("%d -> ", root->key);
  }
}

struct node *find(struct node *root,int key)
{
  // struct node *loc;
  // struct node *par;

    // Base case: root is null or data is present at root
    if (root == NULL || root->key == key)
        return root;

    // key is greater than root's key
    if (key > root->key)
        return find(root->right, key);

    // key is smaller than root's key
    return find(root->left, key);

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

  printf("postorder traversal\n");
  postorder(root);

  int key;
  printf("enter the item for search : ");
  scanf("%d",&key);
  struct node *fond = find(root,key);
  
  if(fond != NULL)
  {
      printf("item %d is found and address is %d",fond->key,fond);
  }
  else
  {
      printf("item %d dose not found ",key);
  }
 
    return 0;
}