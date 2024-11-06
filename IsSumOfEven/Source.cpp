#include <iostream>
using namespace std;

int ReadInteger(const string& prompt) {
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

void CheckSumEven(int a, int b) {
    if ((a + b) % 2 == 0)
        cout << "Sum is Even" << endl;
    else
        cout << "Sum is Odd" << endl;
}

int main() {
    int a = ReadInteger("Enter the first number: ");
    int b = ReadInteger("Enter the second number: ");
    CheckSumEven(a, b);
    return 0;
}
