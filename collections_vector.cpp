#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

int main() {
    vector<int> v;
    int i=115, j=0;
    for (int k=0; k<100; k++) {
        v.push_back(i+k);
    }
    while(j < v.size()) {
        cout << setw(5) << v[j];
        if (j % 10 == 9) {cout << endl;}
        j++;
    }
}