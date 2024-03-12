#include <iostream>
using namespace std;

class Cash {
public:
    int balance;
    int income;

    Cash() {
        balance = 0;
        income = 0;
    }

    ~Cash() {}
};

class Till : public Cash {
public:

    Till() {
        cashbox();
    }

    ~Till() {}

    void cashbox() {
        balance = 15000;
        income = 5000;
    }

    void print() {
        cout << "Balance = " << balance << ".\n" << "Income today = " << income << ".\n";
    }
};