#include <iostream>
using namespace std;

int ReadInteger(const string& prompt) {
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

void CheckLeapYear(int year) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        cout << "Leap Year" << endl;
    else
        cout << "Not a Leap Year" << endl;
}

int main() {
    int year = ReadInteger("Enter a year: ");
    CheckLeapYear(year);
    return 0;
}
