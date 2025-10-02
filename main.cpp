/*
Aditya Patra
Color Class Assignment Part 2
Lab 16

Purpose:
Create a Color class that has as its private member variables three integers representing the RBG values

Code normal setter & getter member functions. Also code a member print() method to print the object data.

In main(), create several Color objects, populate them with data, and output their values to the console in neatly-formatted output using the object's print() method.

New Tasks:
Create a default constructor, a parameter constructor, and at least one partial constructor.

In main(), instantiate a variety of Color objects using a variety of types of constructors.
*/
#include <iostream>
#include <iomanip>
using namespace std;

class Color {
    private:
        int red;
        int green;
        int blue;
    public:
        Color(int r, int g, int b) {
            red = r;
            blue = b;
            green = g;
        }
        Color() {
            red = 0;
            blue = 0;
            green = 0;
        }
        Color(int r, int g) {
            red = r;
            green = g;
            blue = 0;
        }
        Color(int r) {
            red = r;
            green = 0;
            blue = 0;
        }
        int getRed() {
            return red;
        }
        int getBlue() {
            return blue;
        }
        int getGreen() {
            return green;
        }
        void setRed(int val) {
            red = val;
        }
        void setBlue(int val) {
            blue = val;
        }
        void setGreen(int val) {
            green = val;
        }
        void print() {
            cout << setw(3) << setfill('0') << red << "::";
            cout << setw(3) << setfill('0') << green << "::";
            cout << setw(3) << setfill('0') << blue << "\n";
        }
};
int main() {
    Color color1 = Color(42, 32, 10);
    Color color2 = Color();
    Color color3 = Color(35, 24);
    Color color4 = Color(63);
    Color color5 = Color(45, 76, 90);
    Color color6 = Color(23, 32);
    std::cout << endl << "Color 1(parameter): ";
    color1.print();
    std::cout << endl << "Color 2(no parameter): ";
    color2.print();
    color2.setBlue(32);
    color2.setGreen(12);
    std::cout << endl << "Color 2(modified): ";
    color2.print();
    std::cout << endl << "Color 3(partial 2): ";
    color3.print();
    std::cout << endl << "Color 4(partial 1): ";
    color4.print();
    color4.setRed(141);
    std::cout << endl << "Color 4(modified): ";
    color4.print();
    std::cout << endl << "Color 5(parameter): ";
    color5.print();
    std::cout << endl << "Color 6(partial 2): ";
    color6.print();
}
