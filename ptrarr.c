#include <stdio.h>
#include<string.h>
const int Max= 5;
int main() {
    int arr[]= {5,4,3,2,1};
    int i ,  *ptr[Max];
    for ( i = 0; i < Max; i++)
    {
       ptr[i]=&arr[i];
    }
    for ( i = 0; i < Max; i++)
    {
       printf("\nAddress of the %dth element is %d\n ",i,ptr[i]);
       printf("Value of the %dth element is %d\n ",i,*ptr[i]);
    }

    return 0;
}
