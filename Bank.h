#include <iostream>
#include "Account.h"

using namespace std;

class Bank : Account {
    virtual void deposit(double amount){
        balance += amount;
    }

    virtual ~Bank() {}
};
