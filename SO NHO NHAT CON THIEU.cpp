#include<iostream>
#include<math.h>

using namespace std;

void nhap(long long a[], long long n) {
	for(int i=0;i<n-1;i++) {
		cin >> a[i];
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, a[100005];
		cin >> n;
		nhap(a,n);
		for(int i=0;i<n-1;i++) {
			if(a[i+1]!=a[i]+1) {
				cout << a[i]+1 << endl;
				break;
			}
		}
	}
}

