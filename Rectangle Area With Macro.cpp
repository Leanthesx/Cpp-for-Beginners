#include "iostream"

using std::cin;
using std::cout;

#define areaofrectangle(a, b) a * b

int main(int argc, char* argv[])
{
    int shortedge, longedge;
    cout << "Short Edge: ";
    cin >> shortedge;

    cout << "Long Edge: ";
    cin >> longedge;

    cout << "The area of the rectangle is "<< areaofrectangle(shortedge, longedge);
    
    return 0;
}
