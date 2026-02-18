#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int my_values[16];
    for (int i=0; i<16; i++) {
        my_values[i] = 3*i*i + 2*i + 5;
    }
    cout << setw(5) << "x" << "|" << setw(5) << "y" << endl;
    cout << "===========" << endl;
    for (int i=0; i<16; i++) {
        cout << setw(5) << i << "|" << setw(5) << my_values[i] << endl;
    }
}