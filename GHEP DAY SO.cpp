#include<iostream>
#include<math.h>

using namespace std;

void nhap(int a[][105], int k, int n) {
	for(int i=0;i<k;i++) {
		for(int j=0;j<n;j++) {
			cin >> a[i][j];
		}
	}
}

void ghep(int a[][105], int k, int n, int c[], int m) {
	int dem=0;
	for(int i=0;i<k;i++) {
		for(int j=0;j<n;j++) {
			c[dem++]=a[i][j];
		}
	}
}

void noibot(int a[], int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i]>a[j]) {
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int k, n, a[105][105], c[105*105]={-1};
		cin >> k >> n;
		nhap(a,k,n);
		ghep(a,k,n,c,n*k);
		noibot(c,k*n);
	}
	return 0;
}
