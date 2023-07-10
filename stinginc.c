#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");    
    gets(str2);

    printf("\n--- String Functions ---\n");

    printf("Length of str1: %d\n", strlen(str1));
    printf("Length of str2: %d\n", strlen(str2));
    
    printf("Concatenating str2 to str1...\n");
    strcat(str1, str2);
    printf("str1 after concatenation: %s\n", str1);

    printf("Copying str2 to str1...\n");
    strcpy(str1, str2);
    printf("str1 after copying: %s\n", str1);


    int cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("str1 and str2 are equal.\n");
    } else if (cmp < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");
    }

    return 0;
}
