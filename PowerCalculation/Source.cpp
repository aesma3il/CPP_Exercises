#include <iostream>
#include <string>
#include <cmath>

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

int CalculatePower(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < abs(exponent); i++) {
        result *= base;
    }
    return result;
}

void PrintPowerResult(int result) {
    cout << "Power result: " << result << endl;
}

void powerCalculation() {
    int base = ReadInteger("Enter the base:");
    int exponent = ReadInteger("Enter the exponent:");
    int result = CalculatePower(base, exponent);
    PrintPowerResult(result);
}

int main() {
    powerCalculation();
    return 0;
}
