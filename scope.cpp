#include<iostream>
#include<string>

using namespace std;

int main() {
    // Declarations should go at the top of the scope.
    int x = 0, y = 0;
    string words_words_words = "";
    // The variables x, y, words_words_words are available in all of main().

    cout << "x: " << x << " y: " << y << endl;
    cout << "words_words_words: " << words_words_words << endl;

    for (int i=0; i<10; i++) {
        // Every set of {} curly braces creates a new scope.
        cout << "i: " << i << '\t';
    }
    cout << endl;
    // i is out of scope here, can't compile.
    // C++ says: error: use of undeclared identifier 'i'
    // cout << i << endl;
    {
        // These curly braces create a new scope inside main().
        // You don't have to have a loop or conditional to use {}.
        float r = 3.14159;
        cout << "r: " << r << endl;
    }
    // r is out of scope here.
    // cout << "r: " << r << endl;
}