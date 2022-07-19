#include<iostream>
#include<math.h>

using namespace std;

void nhap(int a[100][100], int m , int n) {
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
		int n;
		cin >> n;
		int a[100][100];
		nhap(a,n,n);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == 0 || j == 0) {
					cout << a[i][j] << " ";
				}
				else if (i == n-1 || j == n-1) {
					cout << a[i][j] << " ";
				}
				else cout << "  ";
			}
			cout << endl;
		}
	}
}

