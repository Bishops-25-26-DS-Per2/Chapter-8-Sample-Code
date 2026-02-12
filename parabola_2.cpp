#include<iostream>
#include<iomanip>

using namespace std;

int y;

void f(int x) {
    y = 3*x*x - 5*x + 7;
}

int main() {
    int x;
    cout << setw(5) << "x" << setw(5) << "y" << endl;
    cout << "==========" << endl;
    for (x=-5; x<=5; x++) {
        f(x);
        cout << setw(5) << x << setw(5) << y << endl;
    }
}