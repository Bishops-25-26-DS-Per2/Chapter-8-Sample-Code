#include<iostream>

using namespace std;

int main() {
    int nums[256];
    string tmp;
    for (int i=0; i<256; i++) {
        nums[i] = i;
    }
    for (int i=0; i<256; i++) {
        cout << bitset<8>(nums[i]) << " ";
        if (i % 8 == 7) {
            cout << endl;
        }
    }
    getline(cin, tmp);
    int* p = &nums[0];
    for (int i=0; i<256; i++) {
        cout << hex << (long) (p + i) << " ";
        if (i % 8 == 7) {
            cout << endl;
        }
    }
    cout << endl;
}