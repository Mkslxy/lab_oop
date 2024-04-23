#include <iostream>

using namespace std;

class UpdateInformation {
private:
    int income;
    int balance;

public:
    UpdateInformation(int balance , int income) : balance(balance) , income(income) {}

    const int& getIncome()  {
        return income;
    }

    void setIncome(int income){
        this->income = income;
    }

    void print() {
        cout << "Balance = " << balance << ".\n" << "Income today = " << income << ".\n";
    }
};