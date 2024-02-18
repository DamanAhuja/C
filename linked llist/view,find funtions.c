#include <stdio.h>
#include <stdlib.h>

struct node { // creating manual data type
    int data;
    struct node *next;
};

void view(struct node *head) { // defining a function "view"
    while (head != NULL) { // untill head is null it will print the data in node
        printf("%d\n",head -> data);
        head = head -> next;
    }
}
void find(struct node *f,struct node *head) { // defining a function "find"
    if (head == f) { // if the first node itself if one we are finding
        printf("%d",head -> data);
    }
    while (head != NULL && head != f) {
        head = head -> next;
    }
    if (head != NULL) {
        printf("%d",head -> data);
    }
}
int main() {
    
    // declaring the nodes
    struct node head; 
    struct node *a;
    struct node *b;
    struct node *c;
    struct node *d;
    
    // allocating the memory
    a = (struct node*)malloc(sizeof(struct node)); 
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));
    d = (struct node*)malloc(sizeof(struct node));
    
    // initialisation 
    head.data = 0;
    head.next = a;
    
    a->data = 1;
    a->next = b;
    
    b->data = 2;
    b->next = c;
    
    c->data = 3;
    c->next = d;
    
    d->data = 4;
    d->next = NULL;
    
    view (head.next); // calling the funtions
    find (b,head.next);
    
    free(a); // making the pointers free
    a = NULL; // avoiding dangling pointers
    
    free(b);
    b = NULL;
    
    free(c);
    c = NULL;
    
    free(d);
    d = NULL;
    
    return 0;
}

