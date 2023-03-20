#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    string dna;
    cin >> dna;
    int maxLength = 1;
    int currentLength = 1;

    for (int i = 1; i < dna.length(); i++) {
        if (dna[i] == dna[i - 1]) {
            currentLength++;
            maxLength = max(maxLength, currentLength);
        }
        else {
            currentLength = 1;
        }
    }

    cout << maxLength << endl;
    return 0;
}