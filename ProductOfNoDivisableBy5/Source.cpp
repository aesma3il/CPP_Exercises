#include <iostream>
using namespace std;

int ReadInteger(const string& prompt) {
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

void CheckProductDivisibilityBy5(int a, int b) {
    if ((a * b) % 5 == 0)
        cout << "Product is Divisible by 5" << endl;
    else
        cout << "Product is Not Divisible by 5" << endl;
}

int main() {
    int a = ReadInteger("Enter the first number: ");
    int b = ReadInteger("Enter the second number: ");
    CheckProductDivisibilityBy5(a, b);
    return 0;
}
