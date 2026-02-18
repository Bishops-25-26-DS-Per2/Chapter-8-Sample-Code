#include<iostream>
#include<iomanip>
#include<random>

using namespace std;

// These do not have to be global, but I'm doing it to make things easier.
random_device rd;
uniform_int_distribution<int> one_to_ten(1, 10);

int main() {
    for (int i=0; i<100; i++) {
        cout << setw(5) << one_to_ten(rd);
        if (i % 10 == 9) {cout << endl;}
    }
}