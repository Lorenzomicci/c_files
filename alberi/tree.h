#include <assert.h>

typedef struct Node{
  int data;
  struct Node *left;
  struct Node *right;
} Node;


struct Node *addNode(Node *node,int data);
void delNode(Node *node,int data);
void printTree(Node *node);
struct Node *newNode(int data);
