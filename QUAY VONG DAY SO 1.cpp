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
		int n, d, a[1000005];
		cin >> n >> d;
		nhap(a,n);
		for(int i=d;i<n;i++) {
			cout << a[i] << " ";
		}
		for(int i=0;i<d;i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
