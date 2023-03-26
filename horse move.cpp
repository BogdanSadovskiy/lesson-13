using namespace std;
#include <iostream>

int main()
{
	// хід коня
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
	if (r - 2 >= 0) {
		if (c - 1 >= 0) {
			arr[r - 2][c - 1] = 2;
		}
		if (c + 1 < m) {
			arr[r - 2][c + 1] = 2;
		}
	}
	if (c - 2 >= 0)  {
		if (r - 1 >= 0) {
			arr[r - 1][c - 2] = 2;
		}
		if (r + 1 < n) {
			arr[r + 1][c - 2] = 2;
		}
	}
	
	if (r + 2 <n) {
		if (c - 1 >= 0) {
			arr[r + 2][c - 1] = 2;
		}
		if (c + 1 < m) {
			arr[r + 2][c + 1] = 2;
		}
	}
	if (c + 2 < m) {
		if (r - 1 >= 0) {
			arr[r - 1][c + 2] = 2;
		}
		if (r + 1 < n) {
			arr[r + 1][c + 2] = 2;
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