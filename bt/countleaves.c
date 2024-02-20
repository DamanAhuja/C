#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *lp;
    int data;
    struct node *rp;
} n;

n *newnode(int v){
    n *addnode = (n *)malloc(sizeof(n));
    addnode->rp=NULL;
    addnode->data=v;
    addnode->lp=NULL;
    return addnode;
}
void view(n *root){
    if (root == NULL){
        return;
    }
    else {
        view(root->lp);
        printf("%d ",root->data);
        view(root->rp);
    }
}
int countleaves(n *root) {
    if (root == NULL) {
        return NULL;
    }
    if (root->lp == NULL && root->rp == NULL) {
        return 1;
    }
    else {
        return (countleaves(root->lp)+countleaves(root->rp));
    }
}
int main() {
    
    n *root = newnode(1);
    root->lp = newnode(2);
    root->rp = newnode(3);
    root->lp->lp = newnode(4);
    root->lp->rp = newnode(5);
    root->rp->lp = newnode(6);
    root->rp->rp = newnode(7);
    
    view(root);
    printf("\nNo. of leaves: %d",countleaves(root));
    
    free(root->rp->rp);
    free(root->rp->lp);
    free(root->lp->rp);
    free(root->lp->lp);
    free(root->rp);
    free(root->lp);
    free(root);

    return 0;
}
