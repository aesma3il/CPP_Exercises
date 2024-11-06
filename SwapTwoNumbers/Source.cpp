#include <iostream>
#include <string>

using namespace std;

void Print(const string& prompt) {
    cout << prompt << endl;
}

int ReadInteger(const string& message) {
    Print(message);
    int number;
    cin >> number;
    return number;
}

void Swap(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void PrintSwappedValues(int a, int b) {
    cout << "Swapped values: a = " << a << ", b = " << b << endl;
}

void swapNumbers() {
    int a = ReadInteger("Enter the first number:");
    int b = ReadInteger("Enter the second number:");
    Swap(a, b);
    PrintSwappedValues(a, b);
}

int main() {
    swapNumbers();
    return 0;
}
