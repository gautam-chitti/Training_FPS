#include <iostream>
using namespace std;
class operation
{
    int a,b,add,sub,mul;
    float div;
public:
    void get();
    void sum();
    void multiply();                  // inline with classes and objects
    void difference();
    void divide();

};
inline void operation :: get(){
    cout<<"enter the first : "<<endl;
    cin>>a;
    cout<<"enter the second : "<<endl;
    cin>>b;

}
inline void operation :: sum(){
    add= a+b;
    cout<<"the sum is : "<<add<<endl;
   
}
inline void operation :: difference(){
    sub= a-b;
    cout<<"the difference is : "<<sub<<endl;
   
}
inline void operation :: multiply(){
    mul= a*b;
    cout<<"the product is : "<<mul<<endl;
   
}
inline void operation :: divide(){
    div= a/b;
    cout<<"the division is : "<<div<<endl;
   
}
int main(){
      operation s;                   // 
      s.get();                      // inline fuctions increases the effieciency of the program
      s.sum();                     
      s.difference();                      
      s.divide();                     
      s.multiply();                      

}
