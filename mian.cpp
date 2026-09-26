// COMSC-210 | Lab 14 | Huiluan Yie

#include <iostream>
#include <iomanip>
using namespace std;

const int W = 10;

class Color
{
    int red;
    int green;
    int blue;

    public:
    // setter
    void set_red(int r)
    {
        if (r < 0)
        {
            cout << "invalid red value";
            return;
        } 
        if (r > 225) return; // failed
        red = r;
    }
    void set_green(int g) { green = g; }
    void set_blue(int b)  { blue = b; }

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
    Color c;
    c.set_red(0);
    c.set_green(0);
    c.set_blue(0);

    c.print();

    return 0;
}
