#include<iostream>
#include<math.h>

using namespace std;

void nhap(int a[], int n) {
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, a[105], k, dem=0;
		cin >> n >> k;
		nhap(a,n);
		for(int i=0;i<n-1;i++) {
			for(int j=i+1;j<n;j++) {
				if(a[i]+a[j]==k) {
					dem++;
				}
			}
		}
		cout << dem << endl;
	}
}
