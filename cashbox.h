#include <iostream>


using namespace std;

class Cash {
public:
    int balance;
    int income;
};

class Till : public Cash {
public:
    void cashbox() {
        balance = 15000;
        income = 5000;
    }

    void print() {
        cout << "Balance = " << balance << ".\n" << "Income today = " << income << ".\n";
    }
};

