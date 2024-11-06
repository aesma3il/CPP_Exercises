#include <iostream>
using namespace std;

int ReadInteger(const string& prompt) {
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

void FindLastDigit(int num) {
    cout << "Last Digit: " << num % 10 << endl;
}

int main() {
    int num = ReadInteger("Enter a number: ");
    FindLastDigit(num);
    return 0;
}
