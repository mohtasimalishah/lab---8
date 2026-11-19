
#include <iostream>
#include <string>
using namespace std;

struct Laptop
{
    string brand;
    int ram;
    float price;
};

int main()
{
    Laptop l;

    cout << "Enter laptop brand: ";
    getline(cin, l.brand);

    cout << "Enter RAM in GB: ";
    cin >> l.ram;

    cout << "Enter laptop price: ";
    cin >> l.price;

    cout << endl;

    cout << "Laptop Specifications" << endl;
    cout << "Brand: " << l.brand << endl;
    cout << "RAM: " << l.ram << " GB" << endl;
    cout << "Price: " << l.price << endl;

    return 0;
}

