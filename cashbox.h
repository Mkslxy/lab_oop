#include <iostream>


using namespace std;

class Person {
private:
   int balance;
   int income;
};

class cash : private Person {

};