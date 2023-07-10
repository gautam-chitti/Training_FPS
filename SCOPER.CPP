#include <iostream>
using namespace std;
int x = 5; // Global variable

int main() {
    int x = 10; // Local variable

    cout << "Local variable x: " << x << endl;
    cout << "Global variable x: " << ::x << endl;
    // To Output Gloabal variable we have to use "  :: "

    return 0;
}
