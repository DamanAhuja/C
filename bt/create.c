#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *lp;
    int data;
    struct node *rp;
}node;

node *newnode (int d) {
    node *addnode = (node* )malloc(sizeof(node));
    addnode->lp = NULL;
    addnode->data = d;
    addnode->rp = NULL;
    return addnode;
}
void view(node *root) {
    if (root==NULL) {
        return;
    }
    else {
        view(root->lp);
        printf("%d ",root->data);
        view(root->rp);
    }
}
int main() {
    node *root = newnode(1);
    
    root->lp=newnode(2);
    root->rp=newnode(3);
    
    root->lp->lp=newnode(4);
    root->lp->rp=newnode(5);
    
    root->rp->lp=newnode(6);
    root->rp->rp=newnode(7);
    
    view(root);
    
    free(root->rp->rp);
    free(root->rp->lp);
    free(root->lp->rp);
    free(root->lp->lp);
    free(root->rp);
    free(root->lp);
    free(root);
    return 0;
}
