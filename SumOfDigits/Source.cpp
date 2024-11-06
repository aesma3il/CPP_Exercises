#include <iostream>
using namespace std;

int ReadInteger(const string& prompt) {
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

int CalculateSumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num = ReadInteger("Enter a number: ");
    int sum = CalculateSumOfDigits(num);
    cout << "Sum of Digits: " << sum << endl;
    return 0;
}
