#include <iostream>
using namespace std;

void showArray(int array[], int length) {
	for (int i = 0; i < length; i++)
		cout << array[i] << " ";
}

void showArray(double array[], int length) {
	for (int i = 0; i < length; i++)
		cout << array[i] << " ";
}

template <typename T> T MaxArray(T array[], int length, T max = 0) {
	for (int i = 0; i < length; i++)
		if (max < array[i])
			max = array[i];
	return max;
}



int main(void) {
	setlocale(LC_ALL, "Russian");
	
	int mas[5] = { 2, 5, 6, 3, 9 };
	double mas1[4] = { 1.2, 5.3, 6.5, 1.7 };

	cout << "������ ������: ";
	showArray(mas, 5);
	cout << endl;
	cout << "������ ������: ";
	showArray(mas1, 4);
	cout << endl;

	cout << "������������ ������� ������� �������: " << MaxArray(mas, 5) << endl;
	cout << "������������ ������� ������� �������: " << MaxArray(mas1, 4) << endl;




	return 0;
}