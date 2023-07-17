#include <iostream>
using namespace std;
int main()
{
    int arr[]={22,11,2,89,4,99,55,23,1};
    for(int i=0; i<9; i++)
    {
        // run an inner loop j for bubble sort from 0 to N-1-i
        for(int j=0; j<9-i; j++)
        {
            // now check if the value at num[j] is greater than value at num[j+1]
            if(arr[j]>arr[j+1])
            {
                // if the value is greater then swap the numbers
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
            cout<<"|"<<arr[i]<<"|";
    }
    

}
