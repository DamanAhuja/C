#include <stdio.h>
#include <stdlib.h>

struct node { // creating manual data type
    int data;
    struct node *next;
};

void view(struct node *head) { // defining a function "view"
    while (head != NULL) { // until head is null it will print the data in node
        printf("%d ",head -> data);
        head = head -> next;
    }
    printf("\n");
}
void del(struct node *f,struct node h,struct node *head) { 
    if (head == f) { // if we want to delete the first node
        h.next=f->next;
        return;
    }
    while (head->next !=NULL && head->next !=f) {
        head = head->next;
    }
    // if given node is not present 
    if (head->next == NULL) {
        return;
    }
    head->next=f->next;
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
    
    del (d,head,&head);
    
    
    view (head.next);
    
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
