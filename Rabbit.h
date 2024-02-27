#include<iostream>
using namespace std;


class Rabbit {
private:
    string name;
    int size;
    int age;
    string color;
    string behavior;

public :
    Rabbit(string name , int size , int age , string color , string behavior){
        this->name = name;
        this->size = size;
        this->age = age;
        this->color = color;
        this->behavior = behavior;
    }
    ~Rabbit() {

    }

    void print() {
        cout << "Name = " << name << "\n" << "Size = " << size << "\n" << "Age = " << age << "\n" << "Color = " << color
             << "\n" << "Behavior = " << behavior << "\n";
    }
};