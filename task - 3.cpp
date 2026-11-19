
#include <iostream>
using namespace std;

struct Rectangle
{
    float length;
    float width;
};

int main()
{
    Rectangle r;

    cout << "Enter rectangle length: ";
    cin >> r.length;

    cout << "Enter rectangle width: ";
    cin >> r.width;

    float area = r.length * r.width;
    float perimeter = 2 * (r.length + r.width);

    cout << endl;

    cout << "Area of Rectangle: " << area << endl;
    cout << "Perimeter of Rectangle: " << perimeter << endl;

    return 0;
}

