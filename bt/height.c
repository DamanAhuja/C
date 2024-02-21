#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *lp;
    int data;
    struct node *rp;
} sn;

sn *newnode(int v) {
    sn *node = (sn *)malloc(sizeof(sn));
    node -> lp = NULL;
    node -> data = v;
    node -> rp = NULL;
    return node;
}

void view (root) {
    if (root == NULL) {
        return;
    }
    else {
        view(root->lp);
        printf("%d ",root->data);
        view(root->rp);
    }
}
int height (root) {
    if (root == NULL) {
        return 0;
    }
    if (root->lp == NULL && root->rp == NULL) {
        return;
    }
    else {
        return (1 + max(height(root->lp),height(root->rp)));
    }
}
int main() {
    
    sn *root = node(1);
    
    root->lp = node(2);
    root->rp = node(3);
    
    root->lp->lp = node(4);
    root->lp->rp = node(5);
    
    root->rp->lp = node(6);
    root->rp->rp = node(7);
    
    view(root);
    printf("Height: %d",height(root);
    
    free(root->rp->rp);
    free(root->rp->lp);
    free(root->lp->rp);
    free(root->lp->lp);
    free(root->rp);
    free(root->lp);
    free(root);
    
    return 0;
}
