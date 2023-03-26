using namespace std;
#include <iostream>

int main()
{
	const int n = 10;
	int A[n];
	int B[n];
	const int m = n * 2;
	int C[m];
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		A[i] = rand() % 10;
	}
	for (int i = 0; i < n; i++) {
		B[i] = rand() % 10;
	}

	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
	cout << endl << endl;
	for (int i = 0; i < n; i++) {
		cout << B[i] << " ";
	}
	cout << endl<< endl;
	for (int i = 0, j = 0; i < n; i++) {
		C[j] = A[i];
		j++;
		C[j] = B[i];
		j++;
	}
	cout << "alternation:\n";
	for (int i = 0; i < m; i++) {
		cout << C[i] << " ";
	}
	cout << endl;
	cout << "following:\n";
	for (int i = 0, j = 0; i < m;) {
		for (int j = 0; j < n; j++) {
			C[i] = A[j];
			i++;
		}
		for (int j = 0; j < n; j++) {
			C[i] = B[j];
			i++;
		}
	}
	for (int i = 0; i < m; i++) {
		cout << C[i] << " ";
	}
	
}