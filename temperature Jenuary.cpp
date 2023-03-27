using namespace std;
#include <iostream>

int main()
{
	const int n = 31;
	int arr[n];
	int a = 0;
	int t = 0;
	srand(time(NULL));
	arr[0] = rand() % 5 - 3;
	a = arr[0];
	if (arr[0] < 0) {
		t = 1;
	}
	for (int i = 1; i < n; i++) {		// рандомізація температури та сворення її меж для правдивості значень
		int r = rand() % 4 + 1;
		if (arr[i - 1] > 11) {
			arr[i] = arr[i - 1] - 2;
			continue;
		}
		else if (arr[i - 1] < -20) {
			arr[i] = arr[i - 1] + 4;
			continue;
		}
		if (r == 1) {
			arr[i] = arr[i-1] - rand() % 2;
		}
		else if (r == 3) {
			arr[i] = arr[i - 1] + 4;
		}
		else if (r == 4) {
			arr[i] = arr[i - 1] - 4;
		}
		else {
			arr[i] = arr[i -1] + rand() % 2;
		}
		a += arr[i];
		if (arr[i - 1] >= 0 && arr[i] < 0) {
			t++;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << " January_________  " << arr[i] << "C^" << endl;
	}
	cout << endl;
	a = a / n;
	cout << "Average temperature is " << a << "C^" << endl;
	if (t == 1) {
		cout << "There is only one time temperature fell bellow 0\n";
	}
	else if (t == 0) {
		cout << "No one registred bellow 0 temp\n";
	}
	else {
		cout << "There are " << t << "times temperature fell bellow 0\n";
	}	
}
