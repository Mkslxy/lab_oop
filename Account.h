#include <iostream>

using namespace std;

class Account{
protected:
    int id;
    int balance;

public:
    Account(int id, int balance) : id(id), balance(balance) {}

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