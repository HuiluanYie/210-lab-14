// COMSC-210 | Lab 14 | Huiluan Yie

#include <iostream>
#include <iomanip>
using namespace std;

const int W = 10;

class Color {
    int red;
    int green;
    int blue;

    public:
    // setter
    void set_red(int r)    { red = r; }
    void set_green(int g)  { green = g; }
    void set_blue(int b)   { blue = b; }

    // getter
    int get_red()   { return red; }
    int get_green() { return green; }
    int get_blue()  { return blue; }

    // other methods
    void print() {
        cout << setw(W) << "Red: " << red << endl;
        cout << setw(W) << "Green: " << green << endl;
        cout << setw(W) << "Blue: " << blue << endl;
    }
};

int main() {
    // declarations
    Color c1, c2, c3;
    cout << "\nThe 1st color:\n";
    c1.set_red(255);
    c1.set_green(0);
    c1.set_blue(0);
    c1.print();

    cout << "\nThe 2nd color:\n";
    c2.set_red(17);
    c2.set_green(69);
    c2.set_blue(8);
    c2.print();

    cout << "\nThe 3rd color:\n";
    c3.set_red(100);
    c3.set_green(0);
    c3.set_blue(50);
    c3.print();

    return 0;
}