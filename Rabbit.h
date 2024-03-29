#include <iostream>
#include <string>

using namespace std;

class Rabbit {
private:
    string name;
    int size;
    int age;
    string color;
    static string behavior;

public:
    Rabbit(string name, int size, int age, string color)
            : name(name), size(size), age(age), color(color) {}

    ~Rabbit() {}

    void print() {
        cout << "Name = " << name << "\n"
             << "Size = " << size << "\n"
             << "Age = " << age << "\n"
             << "Color = " << color << "\n"
             << "Behavior = " << behavior << "\n";
    }

    static void setBehavior(string newBehavior) {
        behavior = newBehavior;
    };
};
