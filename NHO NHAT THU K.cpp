#include<iostream>
#include<math.h>
#include<algorithm>
#include<functional>

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
		int n, k;
		cin >> n >> k;
		int a[n];
		nhap(a,n);
		sort(a,a+n);
		cout << a[k-1] << endl;
	}
}

