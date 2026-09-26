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
        bool set_red(int r) {
            if (r < 0 || r > 255) {
                cout << "\tinvalid red value\n";
                return false;
            }
            red = r;
            return true;
        }
    bool set_green(int g) {
        if (g < 0 || g > 255) {
            cout << "\tinvalid green value\n";
            return false;
        }
        green = g;
        return true;
    }
    bool set_blue(int b) {
        if (b < 0 || b > 255) {
            cout << "\tinvalid blue value\n";
            return false;
        }
        blue = b;
        return true;
    }

    // getter
    int get_red() {
        return red;
    }
    int get_green() {
        return green;
    }
    int get_blue() {
        return blue;
    }

    // other methods
    void print() {
        cout << setw(W) << "Red: " << red << endl;
        cout << setw(W) << "Green: " << green << endl;
        cout << setw(W) << "Blue: " << blue << endl;
    }

};

int main() {
    // declarations
    Color c1, c2, c3, c4, c5;
    cout << "\nThe 1st color:\n";
    if (c1.set_red(-3) && c1.set_green(76) && c1.set_blue(0)) {
        c1.print();
    }

    cout << "\nThe 2nd color:\n";
    if (c2.set_red(23) && c2.set_green(65) && c2.set_blue(19)) {
        c2.print();
    }

    cout << "\nThe 3rd color:\n";
    if (c3.set_red(6) && c3.set_green(14) && c3.set_blue(-4)) {
        c3.print();
    }

    cout << "\nThe 4th color:\n";
    if (c4.set_red(94) && c4.set_green(276) && c4.set_blue(1)) {
        c4.print();
    }

    cout << "\nThe 5th color:\n";
    if (c5.set_red(0) && c5.set_green(0) && c5.set_blue(0)) {
        c5.print();
    }

    return 0;
}