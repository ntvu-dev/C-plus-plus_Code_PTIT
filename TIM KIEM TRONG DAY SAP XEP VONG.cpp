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
		int n, x, a[100005];
		cin >> n >> x;
		nhap(a,n);
		for(int i=0;i<n;i++) {
			if(a[i]==x) {
				cout << i+1;
			}
		}
		cout << endl;
	}
}
