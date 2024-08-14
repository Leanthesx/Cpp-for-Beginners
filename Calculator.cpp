#include "iostream"

using std::cout;
using std::cin;


int main(int argc, char* argv[])
{
    float number1, number2;
    int selection;
    cout << "Please enter the first number: ";
    cin >> number1;

    cout << "Please enter the second number: ";
    cin >> number2;



    cout << "Please select an operation: 1-Addition, 2-Subtraction, 3-Multiplication, 4-Division" << '\n';
    cin >> selection;

    cout << "Your choice is " << selection << '\n';
    
    switch (selection)
    {
    case 1:
        cout << "Result : " << number1 + number2;
        break;
        
    case 2:
        cout << "Result : " << number1 - number2;
        break;
        
    case 3:
        cout << "Result : " << number1 * number2;
        break;
        
    case 4:
        if(number2 == 0.f)
        {
            cout << "No number can be divided by zero";
        }
        else
        {
            cout << "Result : " << number1 / number2;
        }
        break;
        
    default:
        cout << "You made the wrong choice, exiting...";cd .
    }
    
    return 0;
}
