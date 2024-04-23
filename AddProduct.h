#include <iostream>

using namespace std;

class AddProduct {
private:
    string name;
    int size;
    int age;
    string color;
    string behavior;

public:
    AddProduct(string name, int size, int age, string color, string behavior)
    : name(name), size(size), age(age), color(color), behavior(behavior) {}

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
