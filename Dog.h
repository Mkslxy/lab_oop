#include<iostream>
#include<string>

using namespace std;

class Dog {
private:
    string name;
    int size;
    int age;
    string color;
    string behavior;

public:
    Dog() {
        name = "";
        size = 0;
        age = 0;
        color = "";
        behavior = "";
    }

    Dog(string name, int size, int age, string color, string behavior) {
        this->name = name;
        this->size = size;
        this->age = age;
        this->color = color;
        this->behavior = behavior;
    }

    void print() {
        cout << "Name = " << name << "\n"
             << "Size = " << size << "\n"
             << "Age = " << age << "\n"
             << "Color = " << color << "\n"
             << "Behavior = " << behavior << "\n";
    }
};