#include <iostream>
#include <string>

using namespace std;

class Dog {
private:
    string name;
    int size;
    int age;
    string color;
    string behavior;

public:
    Dog(string name, int size, int age, string color, string behavior)
            : name(name), size(size), age(age), color(color), behavior(behavior) {}

    Dog(Dog&& other)
            : name(move(other.name)), size(other.size), age(other.age), color(move(other.color)), behavior(move(other.behavior)) {}

    void print() {
        cout << "Name = " << name << "\n"
             << "Size = " << size << "\n"
             << "Age = " << age << "\n"
             << "Color = " << color << "\n"
             << "Behavior = " << behavior << "\n";
    }

    const string& getName()  {
        return name;
    }

    const int getSize()  {
        return size;
    }

    void setName(const string& name) {
        this->name = name;
    }

    void setSize(int size) {
        this->size = size;
    }
};
