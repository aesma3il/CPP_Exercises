#include <iostream>
#include <string>

using namespace std;

void Print(const string& prompt) {
    cout << prompt << endl;
}

double ReadDouble(const string& message) {
    Print(message);
    double value;
    cin >> value;
    return value;
}

double CalculateExpression(double a, double b, double c, double d) {
    if (d == 0) {
        cout << "Error: Division by zero is undefined." << endl;
        return 0;
    }
    return (a + b) * c / d;
}

void PrintResult(double result) {
    cout << "Result: " << result << endl;
}

void complexExpression() {
    double a = ReadDouble("Enter value for a:");
    double b = ReadDouble("Enter value for b:");
    double c = ReadDouble("Enter value for c:");
    double d = ReadDouble("Enter value for d:");
    double result = CalculateExpression(a, b, c, d);
    PrintResult(result);
}

int main() {
    complexExpression();
    return 0;
}
