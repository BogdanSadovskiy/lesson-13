using namespace std;
#include <iostream>

int main()
{
	const int n = 5;
	int arr[n][n];
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 20 + 1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int numb;
	int id = 0;
	const int m = 20;
	int mini[m];
	for (int k = 1; k <= 20; k++) {
		numb = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == k) {
					numb++;
					
				}
			}
		}
		if (numb > 1) {
			mini[id] = k;
			id++;
		}
	}

	for (int i = 0; i < id; i++) {
			cout << mini[i]<< " ";
		
	}
}