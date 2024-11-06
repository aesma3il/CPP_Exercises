#include<iostream>
#include<string>

using namespace std;


const string OperationString = "Multiplication";


void Print(const string prompt) {
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


int Multiply(int firstNumber, int secondNumber) {
	return firstNumber * secondNumber;
}

void Print(int mul) {
	Print(OperationString, mul);
}

int main() {
	int first = ReadIntegerNumber("Enter first Number");
	int second = ReadIntegerNumber("Enter second number");
	int mul = Multiply(first, second);
	Print(mul);

	return 0;
}