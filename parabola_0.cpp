#include<iostream>
#include<iomanip>

using namespace std;

int f(int x) {
    return 3*x*x - 5*x + 7;
}

int main() {
    int x, y;
    cout << setw(5) << "x" << setw(5) << "y" << endl;
    cout << "==========" << endl;
    for (x=-5; x<=5; x++) {
        y = f(x);
        cout << setw(5) << x << setw(5) << y << endl;
    }
}