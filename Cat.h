#include <iostream>
#include <string>

using namespace std;

class Cat {
private:
    string name;
    int size;
    int age;
    string color;
    string behavior;

public:
    Cat() : name("Barsik"), size(23), age(10), color("White"), behavior("Playful") {}

    Cat(string name, int size, int age, string color, string behavior)
            : name(name), size(size), age(age), color(color), behavior(behavior) {}

    Cat(const Cat &copy)
            : name(copy.name), size(copy.size), age(copy.age), color(copy.color), behavior(copy.behavior) {}

    void print() const {
        cout << "Name = " << name << "\n"
             << "Size = " << size << "\n"
             << "Age = " << age << "\n"
             << "Color = " << color << "\n"
             << "Behavior = " << behavior << "\n";
    }

    void setName(const string &name) {
        this->name = name;
    }
};
