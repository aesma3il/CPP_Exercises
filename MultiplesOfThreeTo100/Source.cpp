#include <iostream>
using namespace std;

void PrintMultiplesOf3() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0)
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    PrintMultiplesOf3();
    return 0;
}
