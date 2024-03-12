#include <iostream>


using namespace std;

class Person {
public:
    string name;
    int age;
    string rank;
    string hair;
    string surname;
    int height;
};

class SavingAccount : public Person {
public:
    void Anton() {
        name = "Anton";
        age = 25;
        rank = "High manager";
        hair = "Black";
        surname = "Vitasov";
        height = 187;
    }

    void Masha(){
        name = "Masha";
        age = 19;
        rank = "Intern";
        hair = "White";
        surname = "Filakovska";
        height = 169;
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

