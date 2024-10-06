#include <iostream>
#include <string>

using namespace std;

void generateCombinations() {
    char A[] = { 'a', 'b', 'c' };
    char C[] = { '0', '1' };

    string D[18];
    int j = 0;

    for (int ia1 = 0; ia1 < 3; ++ia1) {
        for (int ic = 0; ic < 2; ++ic) {
            for (int ia2 = 0; ia2 < 3; ++ia2) {
                D[j] = string(1, A[ia1]) + C[ic] + A[ia2];
                j++;
            }
        }
    }

    cout << "A x C x A: \n";
    for (int i = 0; i < 18; ++i) {
        cout << D[i] << " ";
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }
}

int main() {
    generateCombinations();
    return 0;
}