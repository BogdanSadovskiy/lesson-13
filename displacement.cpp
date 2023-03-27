using namespace std;
#include <iostream>

int main()
{
	const int n = 5;
	const int m = 5;
	int arr[n][m];
	int r,z;
	int q;

	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 10; 
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}
	cout << endl;
	do {
		do {
			cout << "Which side you want to move (1 - right; 2 - left; 3 - up; 4- down)\n";
			cin >> r;
			if (r > 4 || r < 1) {
				cout << "Input correctly\n\n";
			}
		} while (r > 4 || r < 1);
		cout << "Input step you wanna move to\n";
		cin >> z;
		cout << endl;
		int g;
		if (r == 1) {
			cout << "right per " << z << endl << endl;
			for (int y = 1; y <= z; y++) {
				for (int i = 0; i < n; i++) {
					g = arr[i][m - 1];
					for (int j = m - 2; j >= 0; j--) {
						arr[i][j + 1] = arr[i][j];
					}
					arr[i][0] = g;
				}
			}
		}

		else if (r == 2) {
			cout << "left per " << z << endl << endl;
			for (int y = 1; y <= z; y++) {
				for (int i = 0; i < n; i++) {
					g = arr[i][0];
					for (int j = 1; j < m; j++) {
						arr[i][j - 1] = arr[i][j];
					}
					arr[i][m - 1] = g;
				}
			}
		}

		else if (r == 3) {
			cout << "up per " << z << endl << endl;
			for (int y = 1; y <= z; y++) {
				for (int j = 0; j < m; j++) {
					g = arr[0][j];
					for (int i = 1; i < n; i++) {
						arr[i - 1][j] = arr[i][j];
					}
					arr[n - 1][j] = g;
				}
			}
		}

		else if (r == 4) {
			cout << "down per " << z << endl << endl;
			for (int y = 1; y <= z; y++) {
				for (int j = 0; j < m; j++) {
					g = arr[n - 1][j];
					for (int i = n - 2; i >= 0; i--) {
						arr[i + 1][j] = arr[i][j];
					}
					arr[0][j] = g;
				}
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		do {
			cout << endl << "Want to try again? (1 - yes; 0 - exit)\n";
			cin >> q;
			if (q > 1) {
				cout << "Input correctly\n";
			}
		} while (q > 1);
		if (q == 0) {
			cout << "Goodbye\n";
		}
	} while (q == 1);


}