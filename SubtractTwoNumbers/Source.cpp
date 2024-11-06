#include<iostream>
#include<string>

using namespace std;

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


int Subtract(int firstNumber, int secondNumber) {
	return firstNumber - secondNumber;
}

void PrintSubtraction(int sub) {
	Print("Subtraction ", sub);
}

int main() {
	int first = ReadIntegerNumber("Enter first Number");
	int second = ReadIntegerNumber("Enter second number");
	int sub = Subtract(first, second);
	PrintSubtraction(sub);

	return 0;
}