#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void view(struct node *head) {
    while (head != NULL) {
        printf("%d\n",head -> data);
        head = head -> next;
    }
}

void add(struct node *head, struct node *add) {
    while (head->next != NULL) {
        head = head -> next;
    }
    head -> next = add;
}

int main() {
    
    struct node head;
    struct node *a;
    struct node *b;
    struct node *c;
    struct node *d;
    struct node *e;

    a=(struct node* )malloc(sizeof(struct node));
    b=(struct node* )malloc(sizeof(struct node));
    c=(struct node* )malloc(sizeof(struct node));
    d=(struct node* )malloc(sizeof(struct node));
    e=(struct node* )malloc(sizeof(struct node));

    head.data = 0;
    head.next = a;

    a -> data = 1;
    a -> next = b;

    b -> data = 2;
    b -> next = c;

    c -> data = 3;
    c -> next = d;

    d -> data = 4;
    d -> next = NULL;
    
    e -> data = 5;
    e -> next = NULL;
    
    printf("Before adding: \n");
    view(head.next);
    add(head.next,e);
    printf("After adding node: \n");
    view(head.next);

    free(a);
    free(b);
    free(c);
    free(d);
    free(e);

    a = NULL;
    b = NULL;
    c = NULL;
    d = NULL;
    e = NULL;

    return 0;
}
