#include<iostream>
#include<string>

using namespace std;

const string OperationString = "Remainder";

void Print(const string& prompt) {
	cout << prompt << endl;
}

void Print(const string& prompt, int value, bool isNewLine = 0) {
	if (isNewLine)
		cout << prompt << " :" << value << endl;
	else
		cout << prompt << " :" << value;
}

int ReadIntegerNumber(const string& message) {
	Print(message);
	int number;
	cin >> number;
	cin.ignore();
	return number;
}

int Remainder(int firstNumber, int secondNumber) {
	if (secondNumber == 0) {
		cout << "Error: Division by zero is undefined." << endl;
		return 0;
	}
	return firstNumber % secondNumber;
}

void Print(int remainder) {
	Print(OperationString, remainder);
}

int main() {
	int first = ReadIntegerNumber("Enter first Number");
	int second = ReadIntegerNumber("Enter second number");
	int remainder = Remainder(first, second);
	Print(remainder);

	return 0;
}
