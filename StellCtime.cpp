#include <iostream>
#include <ctime>

using namespace std;
//Задание 1
/*int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int row = 3;
	const int col = 4;
	int array[row][col] = { {3,5,6,7},{12,1,1,1},{0,7,12,1} };
	double sum = 0;
	int min = array[0][0], max = array[0][0];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << array[i][j] << " ";
			sum += array[i][j];
			if (array[i][j] < min) min = array[i][j];
			if (array[i][j] > max) max = array[i][j];

		}
		cout << endl;
	}
	cout << "Сумма: " << (int)sum << endl;
	cout << "Среднее: " << sum / (row * col) << endl;
	cout << "Минимальный: " << min << endl;
	cout << "Максимальный: " << max << endl;

	return 0;
}*/

//Задание 2
/*int main() {
	srand(time(NULL));
	const int row = 3;
	const int col = 4;

	int array[row][col] = { {3,5,6,7},{12,1,1,1},{0,7,12,1} };
	int rowSums[row] = { 0 }, colSums[col] = { 0 }, total = 0;

	for (int i = 0; i < row; i++) {
		cout << "| ";
		for (int j = 0; j < col; j++) {
			cout << array[i][j] << " | ";
			rowSums[i] += array[i][j];
			colSums[j] += array[i][j];
		}
		total += rowSums[i];
		cout << rowSums[i] << endl;
	}

	cout << "-----------------------\n  ";
	for (int j = 0; j < col; j++) {
		cout << colSums[j] << " | ";
	}
	cout << total;
	return 0;
}*/

//Задание 3
int main() {
	srand(time(NULL));
	const int row1 = 5;
	const int col1 = 10;
	const int row2 = 5;
	const int col2 = 5;
	int array1[row1][col1], array2[row2][col2];

	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col1; j++) {
			array1[i][j] = rand() % 51;
			cout << array1[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < row2; i++) {
		for (int j = 0; j < col2; j++) {
			array2[i][j] = array1[i][j * 2] + array1[i][j * 2 + 1];
			cout << array2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
