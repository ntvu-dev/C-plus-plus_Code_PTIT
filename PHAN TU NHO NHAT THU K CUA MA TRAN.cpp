#include<iostream>
#include<math.h>
#include<functional>
#include<algorithm>

using namespace std;

void nhap(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[100][100], b[100000];
		nhap(a, n, n);
		int d = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				b[d] = a[i][j];
				d++;
			}
		}
		sort(b, b + d);
		cout << b[k-1] << endl;
	}
}

