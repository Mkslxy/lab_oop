#include <iostream>


using namespace std;


class Balance  : public Account {
protected:
    int income;
    int sAss;


public:
    Balance() : Account(0, 0), income(0), sAss(0) {}

    Balance(int sAss) : Account(0, 0), sAss(sAss) {}

    virtual void deposit(double amount) override final {
        balance += amount;
    }

    virtual void withdraw(double amount) {
        balance -= amount;
    }

    ~Balance() {}
};
