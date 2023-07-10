#include <stdio.h>
#include<string.h>
union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
}data;
int main() {
    
    data.intValue=55;
    printf("data.intvalue: %d\n", data.intValue);
    data.floatValue=5.55;
    printf("data.floatvalue: %f\n", data.floatValue);
    strcpy(data.stringValue,"hello world");
    printf("data.stringvalue: %s\n", data.stringValue);
    

    
    printf("Size of union Data: %lu bytes\n", sizeof(union Data));

    return 0;
}