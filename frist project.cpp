#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
double divi(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return (double)a / b;
}

int main() {
    char choice;
    int x, y;

    do {
    cout << "\n-- MAIN MINUE--\n";
        cout<<endl<<endl;
        cout << "1: Add\nA: Subtract\nM: Multiply\nD: Divide\nQ: Quit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice=='Q' || choice=='q') break;

        cout << "Enter two integers: ";
        cin >> x >> y;

        switch(choice) {
            case 'A': case 'a': cout << "Result: " << add(x,y); break;
            case 'S': case 's': cout << "Result: " << sub(x,y); break;
            case 'M': case 'm': cout << "Result: " << mul(x,y); break;
            case 'D': case 'd': cout << "Result: " << divi(x,y); break;
            default: cout << "Invalid choice try in the given intervals";
        }
    } while(true);

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int mark;

    while (true) {
        cout << "Enter mark (-1 to stop): ";
        cin >> mark;

        if(cin.fail()){
            cout<<"Invalid input! enter the valid N.\n";
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }

        if (mark == -1) break;

        if (mark < 0 || mark > 100) {
            cout << "Invalid mark!\n";
            continue;
        }

        if (mark >= 95) cout << "Grade: +A\n";
        else if (mark >= 85) cout << "Grade: A\n";
        else if (mark >= 80) cout << "Grade: A-\n";
        else if (mark >= 75) cout << "Grade: B+\n";
        else if (mark >= 70) cout << "Grade: B \n";
        else if (mark >= 65) cout << "Grade: B-\n";
        else cout << "Grade: F\n";
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    do {
        cout << "Enter rows & cols of array A: ";
        cin >> r1 >> c1;

        cout << "Enter rows & cols of array B: ";
        cin >> r2 >> c2;

        if (c1 != r2)
            cout << "Mult of non-square mat is invalid Try again.\n";

    } while (c1 != r2);

    int A[r1][c1], B[r2][c2], C[r1][c2];

    cout << "Enter all elements of array A:\n";
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            cin >> A[i][j];

    cout << "Enter all elements of array B:\n";
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            cin >> B[i][j];

    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++) {
            C[i][j] = 0;
            for(int k=0;k<c1;k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    cout << "Your new Matrix formed is:\n";
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of your arr!" << endl;
    cin >> size;

    int arr[size];
    int *ptr = arr;

    int sum1 = 0;
    int sum2 = 0;

    cout << "Enter all elements of your array!!" << endl;

    for(int i=0;i<size;i++){
        cin >> *(ptr+i);

        if(*(ptr+i) > 0)
            sum1 += *(ptr+i);
        else if(*(ptr+i) < 0)
            sum2 += *(ptr+i);
    }

    cout << "The sum of positive integers are=" << sum1 << endl;
    cout << "The sum of negative integers are=" << sum2 << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    if (n < 2) {
        cout << "Size must >=2!";
        return 0;
    }

    double arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    double max = arr[0];

    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    double second = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] < max && (second == max || arr[i] > second))
            second = arr[i];
    }

    if (second == max)
        cout << "No second largest";
    else
        cout << "Second largest: " << second;

    return 0;
}


#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("practice.txt", ios::app);

    out << "C++ is general purpose programming language\n";
    out << "C++ is dynamically typed programming language\n";

    out.close();

    ifstream in("practice.txt");

    string line;
    while(getline(in,line))
        cout << line << endl;

    in.close();
}


#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("practice.txt", ios::app);

    file << "C++ is general purpose programming language\n";
    file << "C++ is dynamically typed programming language\n";

    file.close();

    ifstream read("practice.txt");

    string line;
    while(getline(read,line))
        cout << line << endl;

    read.close();

    return 0;
}


#include<iostream>
using namespace std;

struct stud_info{
    int mark;
    string fname,lname,ID;
};

int main(){
    stud_info arr[3];
    stud_info *ptr = arr;

    for(int i=0;i<3;i++){
        getline(cin>>ws,ptr[i].fname);
        getline(cin>>ws,ptr[i].lname);
        cin >> ptr[i].mark;
        getline(cin>>ws,ptr[i].ID);
    }

    int max = ptr[0].mark;

    for(int i=0;i<3;i++){
        if(max < ptr[i].mark)
            max = ptr[i].mark;
    }

    cout << "Max mark = " << max << endl;
}


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout << arr[i] * arr[j] << " ";
        }
        cout << endl;
    }

    return 0;
}