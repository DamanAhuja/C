``` bash
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int bit[n];
    for (int i=0; i<n; i++) {
       printf("Enter the value number %d: ", i);
       scanf("%d", &bit[i]);
   }
   printf ("Entered list: ");
   for (int i=0; i<n; i++) {
       printf("%d\n", bit[i]);
   }
   int c=0;
   int a;
   printf("Enter the number to search: ");
   scanf("%d", &a);
   for (int i=0; i<n; i++) {
       if (bit[i] == a) {
           c++;
       }
   }
   printf("Number of times %d is present is: %d",a,c);
   return 0;
}
```
