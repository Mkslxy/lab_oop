#include <iostream>
#include "Human.h"

using namespace std;

class Employee : public Human {
    string location;
public:

    Employee() = default;

    Employee(const Employee& other)
    : Human(other), location(other.location){

    }

    void Anton() {
        name = "Anton";
        age = 25;
        rank = "High manager";
        hair = "Black";
        surname = "Vitasov";
        height = 187;
        location = "";
    }

    void Masha(){
        name = "Masha";
        age = 19;
        rank = "Intern";
        hair = "White";
        surname = "Filakovska";
        height = 169;
        location = "";
    }

    void Natasha(){
        name = "Natasha";
        age = 18;
        rank = "Manager";
        hair = "Red";
        surname = "Petsentii";
        height = 163;
    }

    void Print() {
        cout << "Name = " << name << ".\n" << "Age = " << age << ".\n" << "Rank = " << rank << ".\n" << "Hair = "
             << hair << ".\n" << "Surname = " << surname << ".\n" << "Height = " << height << ".\n" ;
    }
};

