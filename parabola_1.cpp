#include<iostream>
#include<iomanip>

using namespace std;

// This sets up the return value as an argument
// Gotta pass y by reference in order for the value to go back to main()
void f(int x, int& y) {
    y = 3*x*x - 5*x + 7;
}

int main() {
    int x, y;
    cout << setw(5) << "x" << setw(5) << "y" << endl;
    cout << "==========" << endl;
    for (x=-5; x<=5; x++) {
        f(x, y);
        cout << setw(5) << x << setw(5) << y << endl;
    }
}