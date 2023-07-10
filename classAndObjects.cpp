#include <iostream>
using namespace std;
class Room{
    public:
    double lenght;
    double breadth;
    double height;
    double calculateArea(){
        return 2*(lenght*breadth+breadth*height+height*lenght);
    }
    double calculateVolume(){
        return lenght*breadth*height;

    }

};


int main() {
        Room c1;
        c1.lenght=55;
        c1.breadth=20;
        c1.height=5;
        cout<<"the area is "<<  c1.calculateVolume() << endl;


    return 0;
}
