using namespace std;
#include <iostream>

int main()
{
	// хід слона
	const int n = 8;
	const int m = 8;

	int arr[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = 0;
		}
	}

	int r, c;
	cout << "Input a row\n"; cin >> r;
	cout << "Input a columb\n"; cin >> c;
	r--;
	c--;
	

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = r, j = c; j >= 0 && i >= 0; i--, j--) {
		if (i >= 0 && j >= 0) {
			arr[i][j] = 2;
		}
	}

	for (int i = r, j = c; j>=0  && i < n; i++, j--) {
		if (j >= 0) {
			arr[i][j] = 2;
		}
	}

	for (int i = r, j = c; j < n && i < n; i++, j++) {
		arr[i][j] = 2;
	}
	for (int i = r, j = c; j < n && i >= 0; i--, j++) {
		if (i >= 0 && j >= 0) {
			arr[i][j] = 2;
		}
	}
	arr[r][c] = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;


}