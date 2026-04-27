#include <iostream>
using namespace std;

struct Person {
    char name[50];
    int age;
    float salary;
};

int main() {
    Person p1;
    Person* ptr = &p1;  // pointer to struct

    cout << "Enter name: ";
    cin.get(p1.name, 50);

    cout << "Enter age: ";
    cin >> ptr->age;        // using pointer

    cout << "Enter salary: ";
    cin >> ptr->salary;     // using pointer

    cout << "\n--- Information ---\n";
    cout << "Name = " << ptr->name << endl;
    cout << "Age = " << ptr->age << endl;
    cout << "Salary = " << ptr->salary << endl;

    return 0;
}