#include <iostream>

using namespace std;


class Till : public Cash {
public:
    Till() : Cash() {
    }

    ~Till(){

    }

    void cashbox(){
        balance = 15000;
        income = 5000;
    };

    void print() {
        cout << "Balance = " << balance << ".\n" << "Income today = " << income << ".\n";
    }
};
