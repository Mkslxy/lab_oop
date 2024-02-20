#include <iostream>
#include "lab_1_first_class.h"
#include "lab_1_second_class.h"
#include "lab_1_third_class.h"

using namespace std;


int main() {
    dog Doberman("Sonya", 68, 3, "Black", "Calm and playful");

    dog German_Shepherd("Sergei", 70, 2, "Black and White", " Energic and playful");

    dog Siberian_Husky(" Haski ", 68, 5, " White ", "Playful and aggressive");

    dog Common_Dog;

    cat Common_cat(" Barsik ", 23, 10, " White ", "Playful ");

    cat Maincun(" Sigma ", 40, 2, " Black ", " Calm");

    cat Special_cat(" Antonio ", 24, 11, " White ", "Playful and aggressive");

    rabbits Special_rabbit(" Vitya ", 20, 1, " White ", "Playful and aggressive");

    rabbits Common_rabbit(" Kostya ", 20, 1, " White ", "Playful and aggressive");

    rabbits Dead_rabbit(" Avitos ", 20, 1, " White ", "Playful and aggressive");

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
                Doberman.Print();
                cout << endl;

                cout << "2.\n";
                German_Shepherd.Print();
                cout << endl;

                cout << "3.\n";
                Siberian_Husky.Print();
                cout << endl;

                cout <<" 4.\n";
                Common_Dog.Print();

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


                    case 4 :
                        cout << " Thanks for buying !\n";
                        break;


                    default:
                        cout << " We don't have these dogs !\n";
                        break;
                }
                break;

            case 2:
                cout << "Which one you want to pick ?\n";

                int choice3;

                cout << "1.\n";
                cat().Print1();
                cout << endl;

                cout << "2.\n";
                Maincun.Print1();
                cout << endl;

                cout << "3.\n";
                Special_cat.Print1();
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
                        cout << " We don't have these cats !\n";
                        break;
                }
                break;

            case 3:
                cout << " Which one you want to pick up ?\n";

                cout << endl;

                int choice4;

                cout << "1.\n";
                Special_rabbit.Print2();
                cout << endl;

                cout << "2.\n";
                Common_rabbit.Print2();
                cout << endl;

                cout << "3.\n";
                Dead_rabbit.Print2();
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
                        cout << " We don't have these rabbits !\n";
                        break;
                }
                break;

        }
    }while (choice != 4);
    return 0;
}
