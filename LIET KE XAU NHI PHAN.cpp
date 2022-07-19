#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int a[21], n;

void printfarray() {
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
	cout << " ";
}

void loading(int i) {
	for (int j = 0; j <= 1; j++) {
		a[i] = j;
		if (i == n - 1) {
			printfarray();
		}
		else loading(i + 1);
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		loading(0);
		cout << endl;
	}
	return 0;
}

