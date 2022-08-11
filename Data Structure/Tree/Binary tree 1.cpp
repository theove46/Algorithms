#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node
{
  int data;
  struct node *left;
  struct node *right;
};

Node *creat_node(int val)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if(new_node==NULL)
    {
        printf("Error\n");
        exit(1);
    }
    new_node->data=val;
    new_node->left=NULL;
    new_node->right=NULL;

    return new_node;
}

void add_left(Node *node, Node *child)
{
    node->left = child;
}

void add_right(Node *node, Node *child)
{
    node->right = child;
}

Node *creat_tree()
{
    Node *v1 = creat_node(2);
    Node *v2 = creat_node(7);
    Node *v3 = creat_node(9);
    add_left(v1, v2);
    add_right(v1, v3);

    Node *v4 = creat_node(1);
    Node *v5 = creat_node(6);
    add_left(v2, v4);
    add_right(v2, v5);

    Node *v6 = creat_node(5);
    Node *v7 = creat_node(10);
    add_left(v5, v6);
    add_right(v5, v7);

    Node *v8 = creat_node(8);
    add_right(v3, v8);

    Node *v9 = creat_node(3);
    Node *v10 = creat_node(4);
    add_left(v8, v9);
    add_right(v8, v10);

    return v1;
}

void inorderTraversal(Node *root)
{
    if (root == NULL) return;
    inorderTraversal(root->left);
    printf("%d ->", root->data);
    inorderTraversal(root->right);
}

void preorderTraversal(Node *root)
{
    if (root == NULL) return;
    printf("%d ->", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(Node *root)
{
    if (root == NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ->", root->data);
}


int main()
{
  Node *root = creat_tree();
  printf("Root: %d\n", root->data);

  printf("\nInorder traversal \n");
  inorderTraversal(root);

  printf("\n\nPreorder traversal \n");
  preorderTraversal(root);

  printf("\n\nPostorder traversal \n");
  postorderTraversal(root);
  return 0;
}

