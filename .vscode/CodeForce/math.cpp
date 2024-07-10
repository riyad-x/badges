#include<bits/stdc++.h>
using namespace std;

void math(){
    string one, two;
    cin >> one >> two;
    if (one.size() != two.size()) {
        cout << "Error: Strings must be of the same length." << endl;
        return;
    }
    for (int i = 0; i < one.size(); i++) {
        int xOr = one[i] ^ two[i];
        cout << xOr;
    }
    cout << endl;
}

int main(){
    math();
    return 0;
}