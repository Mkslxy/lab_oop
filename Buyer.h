#include <iostream>
#include "Account.h"

using namespace std;

class Buyer {
private:
    Account account;
    string name;
    int age;
    string hair;
    string surname;
    string phone_number;

public:
    Buyer(string name, int age, string hair, string surname, string phone_number, Account account)
            : name(name), age(age), surname(surname), hair(hair), phone_number(phone_number), account(account) {}


    void Print() {
        cout << "Name = " << name << ".\n" << "Age = " << age << ".\n" << "Hair = " << hair << ".\n" << "Surname = "
             << surname << ".\n" << "Phone number = " << phone_number << ".\n" << "Balance = " << account.getBalance() << ".\n" "Id = " << account.getId() ;
    }
};



