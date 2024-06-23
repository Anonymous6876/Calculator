#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	system("color 2");

	cout << "Hello world! ";

	float num1, num2, res;
	char sym;

	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	cout << "Enter symbol: ";
	cin >> sym;

	switch (sym) {
	case '+': res = num1 + num2;
		break;
	case '-': res = num1 - num2;
		break;
	case '*': res = num1 * num2;
		break;
	case '/': res = num1 / num2;
		break;
	default:
		res = 0;
		cout << "Error " << endl;
	}

	cout << "Result: " << res << endl;

}