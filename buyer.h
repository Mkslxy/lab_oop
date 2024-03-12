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

class Person1 {
private:
    Account account;
    string name;
    int age;
    string hair;
    string surname;
    string phone_number;

public:
    Person1(string name, int age, string hair, string surname, string phone_number, Account account)
            : name(name), age(age), surname(surname), hair(hair), phone_number(phone_number), account(account) {}


    void Print() {
        cout << "Name = " << name << ".\n" << "Age = " << age << ".\n" << "Hair = " << hair << ".\n" << "Surname = "
             << surname << ".\n" << "Phone number = " << phone_number << ".\n" << "Balance = " << account.getBalance() << ".\n" "Id = " << account.getId() ;
    }
};



