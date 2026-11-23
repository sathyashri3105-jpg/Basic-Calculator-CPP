
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    double num1, num2;
    int choice;

    while (true)
    {
        cout << "\n===== BASIC CALCULATOR =====" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Modulus (%)" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        // Input validation
        if (cin.fail())
        {
            cout << "Invalid input! Enter a number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choice == 6)
        {
            cout << "Exiting calculator..." << endl;
            break;
        }

        if (choice < 1 || choice > 5)
        {
            cout << "Invalid choice!" << endl;
            continue;
        }

        cout << "Enter first number: ";
        cin >> num1;

        if (cin.fail())
        {
            cout << "Invalid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "Enter second number: ";
        cin >> num2;

        if (cin.fail())
        {
            cout << "Invalid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice)
        {
            case 1:
                cout << "You selected Addition" << endl;
                cout << "Result: " << num1 + num2 << endl;
                break;

            case 2:
                cout << "You selected Subtraction" << endl;
                cout << "Result: " << num1 - num2 << endl;
                break;

            case 3:
                cout << "You selected Multiplication" << endl;
                cout << "Result: " << num1 * num2 << endl;
                break;

            case 4:
                cout << "You selected Division" << endl;

                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Cannot divide by zero!" << endl;

                break;

            case 5:
                cout << "You selected Modulus" << endl;

                if (num2 != 0 &&
                    num1 == static_cast<int>(num1) &&
                    num2 == static_cast<int>(num2))
                {
                    cout << "Result: "
                         << static_cast<int>(num1) % static_cast<int>(num2)
                         << endl;
                }
                else
                {
                    cout << "Error: Modulus requires whole numbers!" << endl;
                }

                break;
        }
    }

    return 0;
}
