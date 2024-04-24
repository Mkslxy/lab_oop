#include <iostream>
#include <memory>
#include <fstream>
#include "Dog.h"
#include "Cat.h"
#include "Rabbit.h"
#include "Employee.h"
#include "Buyer.h"
#include "Till.h"
#include "UpdateInformation.h"
#include "AddProduct.h"

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

    Balance *withdraw = new Balance();

    Balance *deposit = new Balance();

    Account acc{100};
    Account &aRef = acc;
    aRef.withdraw(50);

    Balance sAss{200};
    Account &sRef = sAss;
    sRef.withdraw(150);

    withdraw->withdraw(1000);
    deposit->deposit(1000);

    Balance *array[] = {withdraw, deposit};

    shared_ptr<UpdateInformation> pCashbox = make_shared<UpdateInformation>(15000, 500);

    shared_ptr<AddProduct> pDog = make_shared<AddProduct>("Aswa", 50, 1, "White with pink", "Calm and aggressive");

    Human stufff;
    Employee second_stuff;

    Human *pb = new Employee;

    try {
        int choice, choice2, choice3, choice4;
        string password;
        bool pass;
        do {
            cout << "Please enter the password (Admin or User):" << endl;
            cin >> password;
            if (password != "Admin" && password != "User") {
                throw pass = false;
            }
        } while (password != "Admin" && password != "User");
        if (password == "User") {
            do {

                ofstream outFile("user_choice.txt", ios::app);
                if (!outFile.is_open()) {
                    cerr << "Error: Unable to open user_choice.txt\n";
                    return 1;
                }

                cout << " Please choose which animal you want take in your house \n";
                cout << " 1. DOG \n";
                cout << " 2. CAT \n";
                cout << " 3. RABBIT \n";
                cout << " 4. EXIT \n";


                cin >> choice;

                if (choice != 1 && choice != 2 && choice != 3 ) {
                    throw pass = false;
                } else {
                    switch (choice) {
                        case 1 :
                            outFile << "User selected option 1 - Take a dog\n";
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

                            cout << endl;

                            cout << endl;
                            cin >> choice2;

                            if (choice2 != 1 && choice2 != 2 && choice != 3) {
                                throw pass = false;
                            } else {

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
                            }
                        case 2:
                            outFile << "User selected option 2 - Take a cat\n";
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

                            if (choice3 != 1 && choice3 != 2 && choice3 != 3) {
                                throw pass = false;
                            } else {

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
                            }
                        case 3:
                            outFile << "User selected option 3 - Take a rabbit\n";
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

                            if (choice4 != 1 && choice4 != 2 && choice4 != 3) {
                                throw pass = false;
                            } else {

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
                    }
                }
            } while (choice != 4);
        } else {
            ofstream outFile("admin_choice.txt", ios::app);
            if (!outFile.is_open()) {
                cerr << "Error: Unable to open user_choice.txt\n";
                return 1;
            }
            do {
                cout << " Please choose which animal you want take in your house \n";
                cout << " 1. DOG \n";
                cout << " 2. OUR EMPLOYEES\n";
                cout << " 3. BUYERS\n";
                cout << " 4. YOUR CASHBOX | NEWS\n";
                cout << " 5. UPDATING INFORMATION \n";
                cout << " 6. ADDING THE PRODUCT \n";
                cout << " 7. EXIT \n";

                cin >> choice;

                if (choice != 1 && choice != 2
                    && choice != 3 &&  choice != 4
                    && choice != 5 && choice != 6 && choice != 7) {
                    throw pass = false;
                } else {
                    switch (choice) {
                        case 1 :
                            outFile << "Admin selected option 1 - Take a dog\n";
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

                            cout << endl;

                            if (!pDog) {

                            } else {
                                pDog->print();
                            }


                            cout << endl;
                            cin >> choice2;

                            if (choice2 != 1 && choice2 != 2 && choice != 3) {
                                throw pass = false;
                            } else {

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
                            }
                        case 2:
                            outFile << "Admin selected option 4 - View employees\n";
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

                        case 3:
                            outFile << "Admin selected option 5 - View buyers\n";
                            buyer.Print();
                            cout << endl;
                            cout << endl;
                            break;

                        case 4:
                            outFile << "Admin selected option 6 - View cashbox and news\n";

                            pCashbox->print();
                            cout << endl;

                            stufff.doSomeStuff();
                            second_stuff.doSomeStuff();

                            pb->doSomeStuff();

                            cout << endl;
                            break;

                        case 5: {
                            outFile << "Admin selected option 7 - Update information\n";
                            pCashbox->setIncome(100);
                            break;
                        }
                        case 6:
                            outFile << "Admin selected option 8 - Add a product\n";
                            cout << " You have been added a new dog!\n";
                            pDog->print();

                            break;

                    }
                }
            } while (choice != 7);
        }
    } catch (const bool pass ) {
        cout << " Error\n";
    }
    return 0;
}