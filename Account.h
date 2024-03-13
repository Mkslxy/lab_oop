#include <iostream>

using namespace std;

class Account {
private:
    int id;
    int balance;

public:
    Account(int id, int balance) : id(id), balance(balance) {

    };

    int getId() const {
        return id;
    }

    int getBalance() const {
        return balance;
    }
};