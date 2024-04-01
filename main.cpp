#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Rabbit.h"
#include "Employee.h"
#include "Buyer.h"
#include "Till.h"


using namespace std;

string Rabbit::behavior = "Playful";


int main() {


    Dog doberman("Sonya", 68, 3, "Black", "Calm and playful");

    Dog german_shepherd("Sergei", 70, 2, "Black and White", " Energic and playful");

    Dog &other = german_shepherd;

    const Cat common_cat(" Vasil ", 25, 10, " White ", "Playful ");


    Cat copy = common_cat;

    Cat special_cat(" Antonio ", 24, 11, " White ", "Playful and aggressive");

    Rabbit special_rabbit(" Vitya ", 20, 1, " White ");

    Rabbit common_rabbit(" Kostya ", 20, 1, " White ");

    Rabbit middle_rabbit(" Avitos ", 20, 1, " White ");

    Employee first_employee;

    Employee second_emloyee;

    Employee third_employee;

    Buyer buyer(" Bogdan", 11, "Black", " Volk", "+380687537355", Account(543981272, 2000));

    Cash *withdraw = new Cash();

    Cash *deposit = new Cash();

    Account acc{100};
    Account &aRef = acc;
    aRef.withdraw(50);

    Cash sAss{200};
    Account &sRef = sAss;
    sRef.withdraw(150);

    withdraw->withdraw(1000);
    deposit->deposit(1000);

    Cash *array[] ={ withdraw ,deposit};

    int choice, choice2, choice3, choice4;

    do {
        cout << " Please choose which animal you want take in your house \n";
        cout << " 1. DOG \n";
        cout << " 2. CAT \n";
        cout << " 3. RABBIT \n";
        cout << " 4. OUR EMPLOYEES\n";
        cout << " 5. BUYERS\n";
        cout << " 6. YOUR CASHBOX | NEWS\n";
        cout << " 7. EXIT \n";

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

                other.getName();
                other.setName("Vasiliy");

                other.getSize();
                other.setSize(62);

                other.print();

                //siberian_husky.print();

                cout << endl;

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

                cout << "1.\n";
                special_rabbit.print();
                cout << endl;

                cout << "2.\n";
                Rabbit::setBehavior("Calm");
                common_rabbit.print();
                cout << endl;

                cout << "3.\n";
                Rabbit::setBehavior("Running");
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
            case 4:
                first_employee.Anton();
                first_employee.Print();
                cout << endl;

                second_emloyee.Masha();
                second_emloyee.Print();
                cout << endl;

                third_employee.Masha();
                third_employee.Print();
                cout << endl;
                break;

            case 5:
                buyer.Print();
                cout << endl;
                cout << endl;
                break;

            case 6:
                Till cashbox;
                cashbox.cashbox();
                cashbox.print();
                cout << endl;

                Human stufff;
                Employee second_stuff;

                stufff.doSomeStuff();
                second_stuff.doSomeStuff();

                Human *pb = new Employee;
                pb->doSomeStuff();

                cout << endl;
                break;

        }
    } while (choice != 7);


    delete[] &array;
    return 0;
}
