#include<iostream>

using namespace std;

int main() {
    int i;
    // Try all three of the next three lines in order one at a time
    string words = "HCS: ";
    // string words = "HCS: Data Structures";
    // string words = "HCS: Data Structures and Algorithms";
    string * words_ptr = & words;
    unsigned char * char_ptr;

    cout << sizeof(words) << endl;
    for (i=0; i<sizeof(words); i++) {
        char_ptr = reinterpret_cast<unsigned char*>(words_ptr);
        cout << hex << reinterpret_cast<long>(char_ptr + i) << dec << " ";
        cout << bitset<8>(*(char_ptr + i)) << " ";
        cout << +(*(char_ptr + i)) << " ";
        cout << *(char_ptr + i) << endl;
    }
}