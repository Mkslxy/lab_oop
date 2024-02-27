#include<iostream>

using namespace std;


class Cat {
private:
    string name;
    int size;
    int age;
    string color;
    string behavior;

public :
    Cat() {
        name = "Barsik";
        size = 23;
        age = 10;
        color = "White";
        behavior = "Playful";
    }

    Cat(string name, int size, int age, string color, string behavior) : Cat() {
        this->name = name;
        this->size = size;
        this->age = age;
        this->color = color;
        this->behavior = behavior;
    }

    void print() {
        cout << "Name = " << name << "\n" << "Size = " << size << "\n" << "Age = " << age << "\n" << "Color = " << color
             << "\n" << "Behavior = " << behavior << "\n";
    }
};