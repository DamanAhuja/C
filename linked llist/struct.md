```
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    char alpha[100];
};

int main() {
    int a;
    printf("Enter the number of elements: ");
    scanf("%d",&a);
    struct node *ptr = (struct node *)malloc(a * sizeof(struct node));
    
    for (int i = 0 ; i < a ; i++) {
        printf("Enter the integer: ");
        scanf("%d",&ptr[i].data);
        printf("Enter the character: ");
        scanf("%s",&ptr[i].alpha);
    }
    for (int i=0;i<a;i++) {
        printf ("\n");
        printf ("Integer - %d \nCharacter - %s",ptr[i].data,ptr[i].alpha);
    }
    free(ptr);
    ptr= NULL;
    
    return 0;
}
```
