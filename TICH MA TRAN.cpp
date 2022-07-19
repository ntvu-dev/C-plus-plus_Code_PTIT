#include<iostream>
#include<math.h>
#include<algorithm>
#include<functional>

using namespace std;

void nhap(int a[][50], int m, int n) {
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			cin >> a[i][j];
		}
	}
}

void in(int a[][50], int m, int n) {
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int n, m, p, a[50][50], b[50][50], c[50][50]={0}, k;
	cin >> n >> m >> p;
	nhap(a,n,m);
	nhap(b,m,p);
	for(int i=0;i<n;i++) {
		for(int j=0;j<p;j++) {
			c[i][j]=0;
			for(int k=0;k<m;k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	in(c,n,p);
}

