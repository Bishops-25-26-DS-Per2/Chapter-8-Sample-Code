#include<iostream>

using namespace std;

int main() {
    string tmp;
    int x = 1 + (1 << 10) + (1 << 20) + (1 << 30);
    cout << "              In base 10: " << x << endl;
    cout << "              As 32 bits: " << bitset<32>(x);
    getline(cin, tmp);
    cout << "As 4 sets of 8 bits each: ";
    int* p = &x;
    unsigned char* q = reinterpret_cast<unsigned char*>(p);
    for (int i=0; i<4; i++) {
        cout << bitset<8>(*(q + i)) << " ";
    }
    getline(cin, tmp);
    cout << "One bit at a time:        ";
    for (int i=0; i<32; i++) {
        cout << bitset<32>(x)[i];
        if (i % 8 == 7) {cout << " ";}
    }
    getline(cin, tmp);
    cout << endl << endl;
    cout << "          Memory address of x: " << hex << (long) p << endl;
    cout << "Memory addresses of its parts: ";
    for (int i=0; i<4; i++) {
        cout << hex << (long) q + i << " ";
    }
    cout << endl << endl;
    getline(cin, tmp);

    int y;
    p = &y;
    cout << "          Memory address of y: " << hex << (long) &y << endl;
    cout << "What is stored there before assigning a value to y:" << endl;
    for (int i=0; i<32; i++) {
        cout << bitset<32>(*p)[i];
        if (i % 8 == 7) {cout << " ";}
    }
    cout << endl;
}