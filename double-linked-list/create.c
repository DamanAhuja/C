#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *lp;
    int data;
    struct node *rp;
} sn;

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
    two->data = 1;
    two->rp = three;
    
    three->lp = two;
    three->data = 3;
    three->rp = four;
    
    four->lp = three;
    four->data = 4;
    four->rp = NULL;
    
    free(one);
    one = NULL;
    
    free(two);
    two = NULL;
    
    free(three);
    three = NULL;
    
    free(four);
    four = NULL;
    
    printf("Done");
    
    return;
}
