#include <iostream>
using namespace std;

int ReadInteger(const string& prompt) {
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

void CheckDivisibility(int a, int b) {
    if (b == 0)
        cout << "Cannot divide by zero" << endl;
    else if (a % b == 0)
        cout << "Divisible" << endl;
    else
        cout << "Not Divisible" << endl;
}

int main() {
    int a = ReadInteger("Enter the first number: ");
    int b = ReadInteger("Enter the second number: ");
    CheckDivisibility(a, b);
    return 0;
}
