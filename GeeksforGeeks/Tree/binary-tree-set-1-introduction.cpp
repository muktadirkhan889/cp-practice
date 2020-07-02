/* https://www.geeksforgeeks.org/binary-tree-set-1-introduction/ */
#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data) {
    struct node *node = (struct node *)malloc(sizeof(struct node));

    node->data = data;

    node->left = NULL;
    node->right = NULL;

    return (node);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    struct node *root = newNode(1);
    /*
                1
              /   \
            NULL  NULL

    */

    root->left = newNode(2);
    root->right = newNode(3);

    /* 2 and 3 become left and right children of 1 
            1 
          /   \ 
         2      3 
      /    \    /  \ 
     NULL NULL NULL NULL 

    */

    root->left->left = newNode(4);

    /* 4 becomes left child of 2 
           1 
       /       \ 
      2          3 
    /   \       /  \ 
   4    NULL  NULL  NULL 
  /  \ 
NULL NULL 
*/

    return 0;
}
