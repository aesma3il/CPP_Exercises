#include<iostream>
#include<string>

using namespace std;

const string OperationString = "Division";

void Print(const string& prompt) {
	cout << prompt << endl;
}

void Print(const string& prompt, double value, bool isNewLine = 0) {
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

double Divide(int firstNumber, int secondNumber) {
	if (secondNumber == 0) {
		cout << "Error: Division by zero is undefined." << endl;
		return 0;
	}
	return static_cast<double>(firstNumber) / secondNumber;
}

void Print(double result) {
	Print(OperationString, result);
}

int main() {
	int first = ReadIntegerNumber("Enter first Number");
	int second = ReadIntegerNumber("Enter second number");
	double result = Divide(first, second);
	Print(result);

	return 0;
}
