#include<iostream>
#include<string>

using namespace std;

class dog {
private:
    string name;
    int size;
    int age;
    string color;
    string behavior;

public:
    dog() {
        name = "";
        size = 0;
        age = 0;
        color = "";
        behavior = "";
    }

    dog(string Name, int Size, int Age, string Color, string Behavior) {
            name = Name;
            size = Size;
            age = Age;
            color = Color;
            behavior = Behavior;
    }

    void Print() {
        cout << "Name = " << name << "\n"
             << "Size = " << size << "\n"
             << "Age = " << age << "\n"
             << "Color = " << color << "\n"
             << "Behavior = " << behavior << "\n";
    }
};