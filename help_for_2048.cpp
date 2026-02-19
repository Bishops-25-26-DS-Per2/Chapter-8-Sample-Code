#include<iostream>
#include<array>

using namespace std;

int main() {
    // Part I: Segmentation Faults with vectors/arrays/lists/etc.
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7};
    // Notice that this goes beyond the end of the vector
    // for (int i=0; i<=1000; i++) {
    //     cout << v[i] << " ";
    //     v[i] = i;
    //     // Inconsistent errors: could be just a random number, different 
    //     //  each run, or could be a Segmentation Fault.
    // }
    cout << endl;
    // for (int i=0; i<=1000; i++) {
    //     // If you use .at() you get better error messages.
    //     cout << v.at(i) << " ";
    //     v.at(i) = i;
    // }

    // Part II: switch-case statments
    string tmp;
    char move;
    cout << "What is your move? "; // wasd
    getline(cin, tmp);
    if (tmp.size() > 0) {move = tmp.at(0);} else {return 1;}
    // switch does different things depending on the value of a variable, in
    //  this ex, on value of move:
    switch (move) {
        case 'w': 
            cout << "Up" << endl;
            break;
        case 'a':
            cout << "Left" << endl;
            break;
        case 's':
            cout << "Down" << endl;
            break;
        case 'd':
            cout << "Right" << endl;
            break;
        default:
            cout << "Bad move" << endl;
            break;
    }

    switch (move) {
        case 'w': case 'W':
            cout << "Up" << endl;
            break;
        case 'a': case 'A':
            cout << "Left" << endl;
            break;
        case 's': case 'S':
            cout << "Down" << endl;
            break;
        case 'd': case 'D':
            cout << "Right" << endl;
            break;
        default:
            cout << "Bad move" << endl;
            break;
    }

    // Part III: Interaction of printing to screen and errors
    // Say you're getting an error in a loop, you want to know when it happens.
    cout << endl << endl;
    for (int i=0; i<10; i++) {
        cout << i << " ";
        // Put a statement that crashes on some values not others
    }
    // The cout statement will buffer its outputs.  So, even if some repetitions
    //  of the loop work, you won't see the output because it's been buffered.
    cout << endl << endl;
    for (int i=0; i<10; i++) {
        // To force the buffer to empty and see the results, use flush or endl
        cout << i << " " << flush; // or endl
        // Put a statement that crashes on some values not others
    }
    // C++ does *not* empty the output buffer when the program ends.

    // Part IV: Access objects by reference outside of functions
    vector<vector<int>> board = {{0,0,0},{0,0,0},{0,0,0}};
    // This creates *copies* of each row, changes do *not* persist
    for (auto row: board) {
        for(int i=0; i<row.size(); i++) {
            row[i] = i+5;
            cout << row[i] << " ";
        }
        cout << endl;
    }
    for (auto row: board) {
        for (auto entry: row) {
            cout << entry << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (auto& row: board) {
        for(int i=0; i<row.size(); i++) {
            row[i] = i+5;
            cout << row[i] << " ";
        }
        cout << endl;
    }
    for (auto row: board) {
        for (auto entry: row) {
            cout << entry << " ";
        }
        cout << endl;
    }

}   