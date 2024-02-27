#include<iostream>
using namespace std;


class rabbits {
private:
    string name;
    int size;
    int age;
    string color;
    string behavior;

public :
    rabbits(string Name ,int Size ,int Age ,string Color , string Behavior){
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
    ~rabbits() {

    }

    void print() {
        cout << "Name = " << name << "\n" << "Size = " << size << "\n" << "Age = " << age << "\n" << "Color = " << color
             << "\n" << "Behavior = " << behavior << "\n";
    }
};