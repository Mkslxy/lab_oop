#include <iostream>

using namespace std;

class Account{
protected:
    int id;
    int balance;
    int acc;
public:
    Account(int id, int balance) : id(0), balance(0) {}

    Account(int acc ) : acc(acc){}

    int getId() const {
        return id;
    }

    int getBalance() const {
        return balance;
    }

    virtual void deposit(double amount) {
        balance += amount;
    }

    virtual void withdraw(double amount) {
        balance -= amount;
    }


    virtual ~Account() {}
};