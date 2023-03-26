using namespace std;
#include <iostream>

int main()
{
	// хід коня
	const int n = 5;
	const int m = 5;

	int a;
	cout << "Input first number \n";
	cin >> a;
	long arr[n][m];
	arr[0][0] = a;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 && j == 0) { 
				continue; 
			}
			arr[i][j] = a * 2;
			a = arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


	

}