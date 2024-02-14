#include<iostream>
using namespace std;


class dog {
private:
    string name;
    int size;
    int age;
    string color;
    string behavior;

public :
    dog(string name ,int size ,int age ,string color , string behavior){
    this->name = name;
    this->size = size;
    this->age = age;
    this->color = color;
    this->behavior = behavior;
}
};