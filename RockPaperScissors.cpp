#include "iostream"

using std::cout;
using std::cin;


int main(int argc, char* argv[])
{
    int move;
    char computerselection, userselection;

    //Generate number between 0 and 2
    srand(time(NULL)); 
    move = rand() % 3; 
    
    if (move == 0) { 
        computerselection = 'r'; 
    } 
    else if (move == 1) { 
        computerselection = 'p'; 
    }
    else
    {
        computerselection = 's';
    }
    
    
    cout << "Welcome to the Rock Paper Scissors Game" << '\n';
    cout << "Please select\n r- Rock \n p- Paper \n s- Scissors \n Your Selection is: ";
    cin >> userselection;
    
    switch (userselection)
    {
    case 'r':
        if(computerselection == 'r')
        {
            cout << "Computer's choice is Rock, Draw.";
        }
        else if(computerselection == 'p')
        {
            cout << "Computer's choice is Paper, You lost.";
        }
        else
        {
            cout << "Computer's choice is Scissors, You won.";
        }
        break;
        
    case 'p':
        if(computerselection == 'p')
        {
            cout << "Computer's choice is Paper, Draw";
        }
        else if(computerselection == 's')
        {
            cout << "Computer's choice is Scissors, You lost.";
        }
        else
        {
            cout << "Computer's choice is Rock, You won.";
        }
        break;
        
    case 's':
        if(computerselection == 's')
        {
            cout << "Computer's choice is Scissors, Draw.";
        }
        else if(computerselection == 'r')
        {
            cout << "Computer's choice is Rock, You lost.";
        }
        else
        {
            cout << "Computer's choice is Paper, You won.";
        }
        break;
        
    default:
        cout << "You made the wrong choice";
    }
    return 0;
}
