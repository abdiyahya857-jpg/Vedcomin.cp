#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    string department;
    float gpa;
};

void updateGPA(Student* s, float newGPA) {
    if (s != nullptr) s->gpa = newGPA;
}

void computeStats(Student arr[], int size) {
    if (size == 0) return;
    float sum = 0, maxG = arr[0].gpa, minG = arr[0].gpa;
    for (int i = 0; i < size; i++) {
        sum += arr[i].gpa;
        if (arr[i].gpa > maxG) maxG = arr[i].gpa;
        if (arr[i].gpa < minG) minG = arr[i].gpa;
    }
    cout << fixed << setprecision(2);
    cout << "Avg: " << sum / size << "\nMax: " << maxG << "\nMin: " << minG << endl;
}

int loadRecords(Student arr[], int maxSize) {
    ifstream f("students.txt");
    int i = 0;
    while (i < maxSize && f >> arr[i].id >> arr[i].name >> arr[i].department >> arr[i].gpa) i++;
    f.close();
    return i;
}

void saveRecords(Student arr[], int size) {
    ofstream f("students_updated.txt");
    for (int i = 0; i < size; i++)
        f << arr[i].id << " " << arr[i].name << " " << arr[i].department << " " << arr[i].gpa << endl;
    f.close();
}

int main() {
    Student students[100];
    int count = loadRecords(students, 100);
    if (count > 0) {
        updateGPA(&students[0], 3.9);
        computeStats(students, count);
        saveRecords(students, count);
    }
    return 0;
}