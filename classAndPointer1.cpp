#include <iostream>
using namespace std;
class Employee {
public:
  int id;
  string name;
  string dept;
  void getData() {
    cout << "enter the employee name: " << endl;
    cin >> name;
    cout << "enter the employee dept.: " << endl;
    cin >> dept;
    cout << "enter the employee id: " << endl;
    cin >> id;
  }
  void putData() {
    cout << "The employee name is: " << name << endl;
    cout << "The employee dept is: " << dept << endl;
    cout << "The employee id is: " << id << endl;
  }
};
int main() {
  int n, i;
  Employee emps[55];
  cout << "enter the number of employees: " << endl;
  cin >> n;
  for (i = 0; i < n; i++) {
    emps[i].getData();
  }
  cout << "The employee Data is : " << endl;
  for (i = 0; i < n; i++) {
    emps[i].putData();
  }
  return 0;
}