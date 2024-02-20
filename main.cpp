#include <iostream>
#include "dogs.h"
#include "cats.h"
#include "rabbits.h"

using namespace std;


int main() {
    dogs Doberman("Sonya", 68, 3, "Black", "Calm and playful");

    dogs German_Shepherd("Sergei", 70, 2, "Black and White", " Energic and playful");

    dogs Siberian_Husky(" Haski ", 68, 5, " White ", "Playful and aggressive");

    dogs Common_Dog;

    cats Common_cat(" Barsik ", 23, 10, " White ", "Playful ");

    cats Maincun(" Sigma ", 40, 2, " Black ", " Calm");

    cats Special_cat(" Antonio ", 24, 11, " White ", "Playful and aggressive");

    rabbits Special_rabbit(" Vitya ", 20, 1, " White ", "Playful and aggressive");

    rabbits Common_rabbit(" Kostya ", 20, 1, " White ", "Playful and aggressive");

    rabbits Middle_rabbit(" Avitos ", 20, 1, " White ", "Playful and aggressive");

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
                Doberman.print();
                cout << endl;

                cout << "2.\n";
                German_Shepherd.print();
                cout << endl;

                cout << "3.\n";
                Siberian_Husky.print();
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
                        cout << " We don't have these dogs !\n";
                        break;
                }
                break;

            case 2:
                cout << "Which one you want to pick ?\n";

                int choice3;

                cout << "1.\n";
                cats().print();
                cout << endl;

                cout << "2.\n";
                Maincun.print();
                cout << endl;

                cout << "3.\n";
                Special_cat.print();
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
                Special_rabbit.print();
                cout << endl;

                cout << "2.\n";
                Common_rabbit.print();
                cout << endl;

                cout << "3.\n";
                Middle_rabbit.print();
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
