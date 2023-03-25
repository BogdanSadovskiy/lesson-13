using namespace std;
#include <iostream>

int main()
{
	// хід тури
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
	arr[r][c] = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
		cout <<	arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[r][j] = 2;
			arr[i][c] = 2;
			arr[r][c] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;


}

