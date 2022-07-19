#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

void import(long long a[], int n) {
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		long long a[n], b[m];
		import(a,n);
		import(b,m);
		sort(a,a+n);
		sort(b,b+m);
		cout << a[n-1]*b[0] << endl;
	}
}

