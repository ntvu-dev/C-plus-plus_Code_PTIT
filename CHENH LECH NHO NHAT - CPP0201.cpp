#include<iostream>
#include<math.h>
#include<algorithm>
#include<functional>

using namespace std;

void nhap(long long a[], long n) {
	for(long i=0;i<n;i++) {
		cin >> a[i];
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long n, d=0, 
		long long x, b[10005];
		cin >> n;
		long long a[n];
		nhap(a,n);
		x=n*(n-1)/2;
		for(long i=0;i<n;i++) {
			for(long j=i+1;j<n;j++) {
				b[d]=a[i]-a[j];
				d++;
			}
		}
		sort(b,b+x);
		cout << b[0] << endl;
	}
}

