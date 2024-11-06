#include <iostream>
using namespace std;

int ReadInteger(const string& prompt) {
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

bool IsPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int num = ReadInteger("Enter a number: ");
    cout << (IsPalindrome(num) ? "Palindrome" : "Not a Palindrome") << endl;
    return 0;
}
