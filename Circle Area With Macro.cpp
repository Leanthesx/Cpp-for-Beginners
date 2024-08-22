#include "iostream"

using std::cout;
using std::cin;

#define PI 3.14

int main(int argc, char* argv[])
{
    float radius, area;

    cout << "Please enter the radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;
    cout << "The area of the circle is " << area;
    return 0;
}
