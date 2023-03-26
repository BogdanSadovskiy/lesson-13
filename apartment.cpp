using namespace std;
#include <iostream>

int main()
{
// жителі квартири
	const int e = 4;
	const int f = 5;
	const int ap = 2;
	const int q = e * f * ap;
	int n = 0;
	int arr[e][f][ap];
	int arr2[q];
	srand(time(NULL));
	for (int i = 0; i < e; i++) {
		for (int j = 0; j < f; j++) {
			for (int y = 0; y < ap; y++) {
				arr[i][j][y] = rand() % 6 + 1;
			}
		}
	}
	for (int i = 0; i < e; i++) {
		cout << "____________________________________________________________________\n";
		cout << "		" << i + 1 << "Entrance\n";
		for (int j = 0; j < f; j++) {
			cout << j+1 << " floor";
			for (int y = 0; y < ap; y++) {
				cout << endl << "apartment # "<<  n+1 << ": " << arr[i][j][y];
				arr2[n] = arr[i][j][y];
				n++;
			}
			cout << endl << endl;
		}
		cout << "____________________________________________________________________\n";
	}
	cout << endl;
	cout << "____________________________________________________________________\n";
	cout << "Input number of apartment (1-40) \n"; cin >> n;
	int m;
	int sum;
	if (n % 2 == 0) {
		m = n - 2;
	}
	else { m = n; }
	n--;
	sum = arr2[n] + arr2[m];
	cout << "Sum of " << n + 1 << " and " << m + 1 << " apartments citizens is " << sum << endl;
	cout << "____________________________________________________________________\n";
	cout << endl;

	cout << "____________________________________________________________________\n";
	for (int i = 0; i < e; i++) {
		sum = 0;
		for (int j = 0; j < f; j++) {
			for (int y = 0; y < ap; y++) {
				sum+=arr[i][j][y];
			}
		}
		cout << i + 1 << " entrance has " << sum << " citizens\n";
	}
	cout << "____________________________________________________________________\n";
	cout << endl;
	cout << "____________________________________________________________________\n";
	cout << "Numbers of large family apartments (more then 5):\n";
	n = 1;
	sum = 0;
	for (int i = 0; i < e; i++) {
		for (int j = 0; j < f; j++) {
			for (int y = 0; y < ap; y++) {
				if (arr[i][j][y] > 5) {
					sum++;
				}
				
			}
		}
	}
	int sum2 = sum;
	if (sum > 0) {
		for (int i = 0; i < e; i++) {
			for (int j = 0; j < f; j++) {
				for (int y = 0; y < ap; y++) {
						if (arr[i][j][y] > 5) {
							cout << n;
							sum2--;
							if (sum2 > 0) {
								cout << "; ";
							}
							else {
								cout << ".";
							}
							
						}
						
						n++;
				}
			}
		}
	}
	cout << endl;
	cout << "____________________________________________________________________\n";

}

