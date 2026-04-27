#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
    float salary;
};

void displayPerson(Person p) {
    cout << "Name: " << p.name << " | Age: " << p.age << " | Salary: $" << p.salary << endl;
}

int main() {
    int numPeople = 2;
    Person group[numPeople];

    for(int i = 0; i < numPeople; i++) {
        cout << "Enter name: ";
        getline(cin >> ws, group[i].name);
        cout << "Enter age: ";
        cin >> group[i].age;
        cout << "Enter salary: ";
        cin >> group[i].salary;
    }

    cout << "\nSummary:" << endl;
    for(int i = 0; i < numPeople; i++) {
        displayPerson(group[i]);
    }

    return 0;
}