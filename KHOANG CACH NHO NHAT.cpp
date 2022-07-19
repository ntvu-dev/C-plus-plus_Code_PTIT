#include<iostream>
#include<math.h>
#include<algorithm>
#include<functional>

using namespace std;

void nhap(int a[], long n) {
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long n, x, d=0, b[10005];
		cin >> n;
		int a[n]; 
		nhap(a,n);
		x=n*(n-1)/2;
		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				b[d]=a[i]-a[j];
				d++;
			}
		}
		for(int i=0;i<x;i++) {
			b[i]=abs(b[i]);
		}
		sort(b,b+x);
		cout << b[0] << endl;
	}
}

