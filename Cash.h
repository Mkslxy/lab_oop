#include <iostream>


using namespace std;


class Cash : public Account{
protected:
    int income;

public:
    Cash() : Account(0, 0), income(0) {}

    virtual void deposit(double amount) override final {
        balance += amount;
    }

    virtual void withdraw(double amount) {
        balance -= amount;
    }


    ~Cash() {}

};
