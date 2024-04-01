#include <iostream>

using namespace std;

class Human {
protected:
    string name;
    int age;
    string rank;
    string hair;
    string surname;
    int height;
public:

    void doSomeStuff(){
        cout << " Doing something\n";
    }

    Human() = default;

    Human(const Human &other)
            : name(other.name), age(other.age), rank(other.rank), hair(other.hair), surname(other.surname),
              height(other.height){}
};
