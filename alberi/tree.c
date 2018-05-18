#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "tree.h"

struct Node *newNode(int data){
  struct Node *node = malloc(sizeof(Node)); //alloco lo spazio di memoria
  node->data = data;
  node->left=NULL;
  node->right=NULL;

  return(node);
}

struct Node *addNode(Node *node,int n){
   if(node==NULL) {
     return (newNode(n));  // se l'albero è vuoto ritorno solo un nodo
   }
   else {

     if(n<=node->data)
     {
        node->left = addNode(node->left,n);
     }

     else
     {
       node->right = addNode(node->right,n);
     }

     return(node);

   }
}

void printTree(Node *node) {

  if(node==NULL) return;

  printTree(node->left);
  printf("%d \n",node->data);
  printTree(node->right);

}



int main(int argc, char const *argv[]) {

  printf("%s\n","hello world" );

  Node *tree = NULL;

  tree = addNode(tree,20);
  tree = addNode(tree,10);
  tree = addNode(tree,15);
  tree = addNode(tree,30);

  printTree(tree);

  return 0;
}

























//
