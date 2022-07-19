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
		int n, a[10005], q, l, r, sum;
		cin >> n >> q;
		nhap(a,n);
		while(q--) {
			sum=0;
			cin >> l >> r;
			for(int i=l;i<=r;i++) {
				sum+=a[i-1];
			}
			cout << sum << endl;
		}
		
	}
}

