#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				cin >> a[i][j];
			}
		}
		int hang=0, cot=0;
		while(hang<n && cot<m) {
			for(int i=cot;i<m;i++) {
				cout << a[hang][i] << " ";
			}
			hang++;
			for(int i=hang;i<n;i++) {
				cout << a[i][n-1] << " ";
			}
			m--;
			if(hang<n) {
				for(int i=m-1;i>=cot;i--) {
					cout << a[n-1][i] << " ";
				}
			}
			n--;
			if(cot < m) {
				for(int i=n-1;i>=hang;i--) {
					cout << a[i][cot] << " ";
				}
			}
			cot++;
		}
		cout << endl;
	}
}

