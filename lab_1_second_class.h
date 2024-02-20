#include<iostream>

using namespace std;


class cat {
private:
    string name;
    int size;
    int age;
    string color;
    string behavior;

public :
    cat() {
        name = "Barsik";
        size = 23;
        age = 10;
        color = "White";
        behavior = "Playful";
    }

    cat(string Name, int Size, int Age, string Color, string Behavior) : cat() {
        /*this->name = name;
        this->size = size;
        this->age = age;
        this->color = color;
        this->behavior = behavior;*/

        name = Name;
        size = Size;
        age = Age;
        color = Color;
        behavior = Behavior;
    }

    void Print1() {
        cout << "Name = " << name << "\n" << "Size = " << size << "\n" << "Age = " << age << "\n" << "Color = " << color
             << "\n" << "Behavior = " << behavior << "\n";
    }
};