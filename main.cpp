#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Rabbit.h"

using namespace std;


int main() {
    Dog doberman("Sonya", 68, 3, "Black", "Calm and playful");

    Dog german_shepherd("Sergei", 70, 2, "Black and White", " Energic and playful");

    Dog siberian_husky(" Haski ", 68, 5, " White ", "Playful and aggressive");

    Cat common_cat(" Vasil ", 25, 10, " White ", "Playful ");

    Cat copy = common_cat;

    Cat special_cat(" Antonio ", 24, 11, " White ", "Playful and aggressive");

    Rabbit special_rabbit(" Vitya ", 20, 1, " White ", "Playful and aggressive");

    Rabbit common_rabbit(" Kostya ", 20, 1, " White ", "Playful and aggressive");

    Rabbit middle_rabbit(" Avitos ", 20, 1, " White ", "Playful and aggressive");

    int choice;

    do {
    cout << " Please choose which animal you want take in your house \n";
    cout << " 1. DOG \n";
    cout << " 2. CAT \n";
    cout << " 3. RABBIT \n";
    cout << " 4. EXIT \n";

    cin >> choice;

        switch (choice) {
            case 1 :

                cout << " Which one you want to take ?\n";
                cout << endl;

                cout << "1.\n";
                doberman.print();
                cout << endl;

                cout << "2.\n";
                german_shepherd.print();
                cout << endl;

                cout << "3.\n";
                siberian_husky.print();
                cout << endl;

                int choice2;

                cin >> choice2;
                switch (choice2) {
                    case 1 :
                        cout << " Thanks for buying !\n";
                        break;

                    case 2 :
                        cout << " Thanks for buying !\n";
                        break;

                    case 3 :
                        cout << " Thanks for buying !\n";
                        break;

                    default:
                        cout << " We don't have these Dog !\n";
                        break;
                }
                break;

            case 2:
                cout << "Which one you want to pick ?\n";

                int choice3;

                cout << "1.\n";
                Cat().print();
                cout << endl;

                cout << "2.\n";
                copy.print();
                cout << endl;

                cout << "3.\n";
                special_cat.print();
                cout << endl;

                cin >> choice3;

                switch (choice3) {
                    case 1 :
                        cout << " Thanks for buying !\n";
                        break;

                    case 2 :
                        cout << " Thanks for buying !\n";
                        break;

                    case 3 :
                        cout << " Thanks for buying !\n";
                        break;

                    default:
                        cout << " We don't have these Cat !\n";
                        break;
                }
                break;

            case 3:
                cout << " Which one you want to pick up ?\n";

                cout << endl;

                int choice4;

                cout << "1.\n";
                special_rabbit.print();
                cout << endl;

                cout << "2.\n";
                common_rabbit.print();
                cout << endl;

                cout << "3.\n";
                middle_rabbit.print();
                cout << endl;

                cin >> choice4;

                switch (choice4) {
                    case 1 :
                        cout << " Thanks for buying !\n";
                        break;

                    case 2 :
                        cout << " Thanks for buying !\n";
                        break;

                    case 3 :
                        cout << " Thanks for buying !\n";
                        break;

                    default:
                        cout << " We don't have these Rabbit !\n";
                        break;
                }
                break;

        }
    }while (choice != 4);
    return 0;
}
