#include <iostream>
using namespace std;


class Cash {
protected:
    int balance;
    int income;

public:
    Cash() {
        balance = 0;
        income = 0;
    }

    ~Cash() {}
};
