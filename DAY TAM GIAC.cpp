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
		int n, a[100005];
		cin >> n;
		nhap(a,n);
		int max=a[0];
		for(int i=0;i<n;i++) {
			if(a[i] > max) {
				max=a[i];
			}
		}
		cout << max << endl;
	}
}
