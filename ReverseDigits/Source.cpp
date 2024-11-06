#include <iostream>
using namespace std;

int ReadInteger(const string& prompt) {
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

int ReverseDigits(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main() {
    int num = ReadInteger("Enter a number: ");
    int reversed = ReverseDigits(num);
    cout << "Reversed Number: " << reversed << endl;
    return 0;
}
