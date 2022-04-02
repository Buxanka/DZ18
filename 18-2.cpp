#include <iostream>
using namespace std;

int funcMax(int num1, int num2, int num3) {
	if (num1 > num2 && num1 > num3)
		return num1;
	else
		if (num2 > num1 && num2 > num3)
			return num2;
		else
			return num3;
}

double funcMax(double num1, double num2, double num3) {
	if (num1 > num2 && num1 > num3)
		return num1;
	else
		if (num2 > num1 && num2 > num3)
			return num2;
		else
			return num3;
}

float funcMax(float num1, float num2, float num3) {
	if (num1 > num2 && num1 > num3)
		return num1;
	else
		if (num2 > num1 && num2 > num3)
			return num2;
		else
			return num3;
}


int main(void) {
	setlocale(LC_ALL, "Russian");


	cout << funcMax(1, 7, 4) << endl;
	cout << funcMax(1.2, 7.3, 0.2) << endl;
	cout << funcMax(0.3, 0.7, 1.3) << endl;




	return 0;
}