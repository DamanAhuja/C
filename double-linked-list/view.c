#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *lp;
    int data;
    struct node *rp;
} sn;

void view (sn *node) {
    if (node == NULL) {
        return;
    }
    else {
        while (node->rp != NULL) {
            printf("%d ",node->data);
            node = node->rp;
            }
        printf("%d",node->data);
    }
}

int main() {
    
    sn *one;
    sn *two;
    sn *three;
    sn *four;
    
    one = (sn *)malloc(sizeof(sn));
    two = (sn *)malloc(sizeof(sn));
    three = (sn *)malloc(sizeof(sn));
    four = (sn *)malloc(sizeof(sn));
    
    one->lp = NULL;
    one->data = 1;
    one->rp = two;
    
    two->lp = one;
    two->data = 2;
    two->rp = three;
    
    three->lp = two;
    three->data = 3;
    three->rp = four;
    
    four->lp = three;
    four->data = 4;
    four->rp = NULL;
    
    view(one);
    
    free(one);
    one = NULL;
    
    free(two);
    two = NULL;
    
    free(three);
    three = NULL;
    
    free(four);
    four = NULL;
    
    
    return 0;
}
