#include <stdio.h>
#include<string.h>

int main() {
    int var=3000;
    int *ptr;
    int **pptr;
    ptr = &var;
    pptr = &ptr;



    
    printf("\n Using var value is %d", var);
    printf("\n Using *ptr value is %d", *ptr);
    printf("\n Using **pptr %d", **pptr);

    return 0;
}
