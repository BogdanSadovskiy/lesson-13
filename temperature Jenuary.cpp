using namespace std;
#include <iostream>

int main()
{
	const int n = 31;
	int arr[n];
	int av = 0;
	int k = 0;
	srand(time(NULL));
	for (int i = 0; i < n; i++) {                // randomization of temperature
		if (i == 0) {
			arr[i] = rand() % 5 - 2;
		}
		else {
			int r = rand() % 2 + 1;
			if (arr[i - 1] > 10) {
				arr[i] = arr[i - 1] - 2;
			}
			else {
				if (r == 1) {
					arr[i] = arr[i - 1] - 2;
				}
				else {
					arr[i] = arr[i - 1] + 2;
				}
			}
		}
	}
	cout << "Temperature:\n";
	for (int i = 0; i < n; i++) {
		if (i==0 && arr[0] < 0) {
			k++;
		}
		if (i > 0 && arr[i-1]>=0) {
			if (arr[i] < 0) {
					k++;
			}
			
		}
		av = av + arr[i];
		cout << i+1<< " January  (" << arr[i] << "C)";
		if (i < n - 1) {
			cout << "; " << endl;
		}
		else { cout << "."; }
		
	}
	cout << endl;
	av = av / n;
	cout << "Average temp is " << av << endl;
	if (k > 1) {
		cout << "There are " << k << " times the temperature fell below 0\n"; // якщо першого січня темп < 0, то зараховується як значення
	}																		  // що опустилося нижче 0
	else {
		cout << "There is one time the temperature fell below 0\n";
	}

}