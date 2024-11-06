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

double CalculateAverage(double sum, int count) {
    return sum / count;
}

void PrintAverage(double average) {
    cout << "Average: " << average << endl;
}

void averageOfFiveNumbers() {
    double sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += ReadDouble("Enter number " + to_string(i) + ":");
    }
    double average = CalculateAverage(sum, 5);
    PrintAverage(average);
}

int main() {
    averageOfFiveNumbers();
    return 0;
}
