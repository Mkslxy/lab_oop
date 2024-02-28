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



    Dog()  {
        name = "";
        size = 0;
        age = 0;
        color = "";
        behavior = "";
    }

    Dog(string name, int size, int age, string color, string behavior)  {
        this->name = name;
        this->size = size;
        this->age = age;
        this->color = color;
        this->behavior = behavior;
    }

    Dog( Dog&& other) : name(other.name),
                        size(other.size),
                        age(other.age),
                        color(other.color),
                        behavior(other.behavior){}

    void print() {
        cout << "Name = " << name << "\n"
             << "Size = " << size << "\n"
             << "Age = " << age << "\n"
             << "Color = " << color << "\n"
             << "Behavior = " << behavior << "\n";
    }

    const string &getName() const {
        return name;
    }

    int getSize() const {
        return size;
    }

    void setName(const string &name) {
        Dog::name = name;
    }

    void setSize(int size) {
        Dog::size = size;
    }


};