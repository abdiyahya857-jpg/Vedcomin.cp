#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Account {
    int accNum;
    string name;
    float balance;
};

void transaction(float* bal, float amt, bool isDeposit) {
    if (isDeposit) *bal += amt;
    else if (*bal >= amt) *bal -= amt;
}

void findLowBalances(Account arr[], int size, float limit) {
    for (int i = 0; i < size; i++) {
        if (arr[i].balance < limit)
            cout << "Low Balance: " << arr[i].name << " ($" << arr[i].balance << ")" << endl;
    }
}

int main() {
    Account accounts[50];
    int count = 0;
    ifstream in("bank.txt");
    while (count < 50 && in >> accounts[count].accNum >> accounts[count].name >> accounts[count].balance) count++;
    in.close();

    if (count > 0) {
        transaction(&accounts[0].balance, 500.0, true);
        transaction(&accounts[0].balance, 200.0, false);
        findLowBalances(accounts, count, 100.0);

        ofstream out("bank_updated.txt");
        for (int i = 0; i < count; i++)
            out << accounts[i].accNum << " " << accounts[i].name << " " << accounts[i].balance << endl;
        out.close();
    }
    return 0;
}