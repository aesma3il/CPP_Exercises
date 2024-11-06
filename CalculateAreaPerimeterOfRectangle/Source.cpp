#include <iostream>
#include <string>

using namespace std;

const string OperationStringArea = "Area";
const string OperationStringPerimeter = "Perimeter";

void Print(const string& prompt) {
    cout << prompt << endl;
}

void Print(const string& prompt, double value, bool isNewLine = 0) {
    if (isNewLine)
        cout << prompt << " : " << value << endl;
    else
        cout << prompt << " : " << value;
}

double ReadDoubleNumber(const string& message) {
    Print(message);
    double number;
    cin >> number;
    cin.ignore();
    return number;
}

double CalculateArea(double length, double width) {
    return length * width;
}

double CalculatePerimeter(double length, double width) {
    return 2 * (length + width);
}

void PrintResults(double area, double perimeter) {
    Print(OperationStringArea, area, true);
    Print(OperationStringPerimeter, perimeter, true);
}

int main() {
    double length = ReadDoubleNumber("Enter the length of the rectangle");
    double width = ReadDoubleNumber("Enter the width of the rectangle");
    double area = CalculateArea(length, width);
    double perimeter = CalculatePerimeter(length, width);
    PrintResults(area, perimeter);

    return 0;
}
