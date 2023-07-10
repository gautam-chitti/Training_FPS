#include <stdio.h>
#include<string.h>

struct Employee {
    int id;
    char name[20];
    float salary;
}one;



int main() {
    
    one.id = 256;
    strcpy(one.name, "jacob");
    one.salary = 29000.5;
     printf("one.id: %d\n", one.id);
    printf("one.salary: %f\n", one.salary);
    printf("one.name: %s\n", one.name);


    printf("Size of struct Employee: %lu bytes\n", sizeof(struct Employee));
   
    return 0;
}

