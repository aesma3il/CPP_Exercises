#include <iostream>
using namespace std;

void Print(const string& message) {
    cout << message << endl;
}

int ReadInteger(const string& prompt) {
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

void CheckEvenOdd(int num) {
    if (num % 2 == 0)
        Print("Even");
    else
        Print("Odd");
}

int main() {
    int num = ReadInteger("Enter a number: ");
    CheckEvenOdd(num);
    return 0;
}
