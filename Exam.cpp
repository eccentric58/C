
#include <iostream>
using namespace std;

int main()
{
	const int n = 5;
	int arr[n][n]; // основная матрица 5 на 5
	int arr_c[n];  // положим элементы С1,С2,...С5 тоже в матрицу для удобства 
	double sr_arifm = 0; // переменная для среднего арифметического. 


	for (int i = 0; i < n; i++) {
		cin >> arr_c[i];     // заполняем элементы С1,С2,...,С5
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];  // заполняем элементы матрицы
		}
	}

	for (int i = 0; i < n; i++) {
		sr_arifm += arr[i][i]; // находим элементы главной матрицы и складываем в sr_arifm	
	}

	sr_arifm = sr_arifm / 5; // Т.к матрица 5 на 5, то элементов на главной диагонали - 5, соответсвенно делим на 5.

	int count = 0;

	for (int i = 0; i < n; i++) {
		if (sr_arifm < arr_c[i]) count++;
	}

	if (count == 5) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] > 0) {
					arr[i][j] += sr_arifm;
				}
				else if (arr[i][j] < 0) {
					arr[i][j] -= sr_arifm;
				}
			}
		}
	}

	return 0;
}

