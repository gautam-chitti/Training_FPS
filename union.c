#include <stdio.h>
#include<string.h>
union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
}data;
int main() {
    
    data.intValue=55;
    data.floatValue=5.55;
    strcpy(data.stringValue,"hello world");
    printf("data.intvalue: %d\n", data.intValue);
    printf("data.floatvalue: %f\n", data.floatValue);
    printf("data.stringvalue: %s\n", data.stringValue);
    

    
    printf("Size of union Data: %lu bytes\n", sizeof(union Data));

    return 0;
}
