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

double CalculateArea(double length, double width) {
    return length * width;
}

double CalculatePerimeter(double length, double width) {
    return 2 * (length + width);
}

void PrintResults(double area, double perimeter) {
    cout << "Area: " << area << ", Perimeter: " << perimeter << endl;
}

void rectangleProperties() {
    double length = ReadDouble("Enter the length:");
    double width = ReadDouble("Enter the width:");
    double area = CalculateArea(length, width);
    double perimeter = CalculatePerimeter(length, width);
    PrintResults(area, perimeter);
}

int main() {
    rectangleProperties();
    return 0;
}
