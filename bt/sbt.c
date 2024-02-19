#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool strict(node *root){
    if (root == NULL) {
        return true;
    }
    if (root->lp == NULL && root->rp == NULL) {
        return true;
    }
    if (root->lp != NULL && root->rp != NULL) {
        return(strict(root->lp) && strict(root->rp));
    }
    else {
        return false;
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
    printf("\n");
     if (strict(root)) {
         printf("haa bhidu, strictly binary tree hai");
     }
     else {
         printf("striclty binary tree nahi hai bhidu");
     }
    
    free(root->rp->rp);
    free(root->rp->lp);
    free(root->lp->rp);
    free(root->lp->lp);
    free(root->rp);
    free(root->lp);
    free(root);
    return 0;
}
