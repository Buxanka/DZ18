#include <iostream>
using namespace std;


inline int func(int num1, int num2) {
	return (num1 + num2) / 2;
}




int main(void) {
	setlocale(LC_ALL, "Russian");

	cout << func(2, 4) << endl;




	return 0;
}