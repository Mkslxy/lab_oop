#include<iostream>

using namespace std;


class Cat {
private:
    string name;
    int size;
    int age;
    string color;
    string behavior;
    int data;


public :
    Cat() : data() {
        name = "Barsik";
        size = 23;
        age = 10;
        color = "White";
        behavior = "Playful";
    }

    Cat(const Cat &copy) : data() {
        this->name = copy.name;
        this->size = copy.size;
        this->age = copy.age;
        this->color = copy.color;
        this->behavior = copy.behavior;
    }

    Cat(string name, int size, int age, string color, string behavior) : Cat() {
        this->name = name;
        this->size = size;
        this->age = age;
        this->color = color;
        this->behavior = behavior;
    }

    void print() const {
        cout << "Name = " << name << "\n" << "Size = " << size << "\n" << "Age = " << age << "\n" << "Color = " << color
             << "\n" << "Behavior = " << behavior << "\n";
    }
};