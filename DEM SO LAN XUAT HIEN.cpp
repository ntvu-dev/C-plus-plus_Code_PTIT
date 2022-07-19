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
		int n, a[1005], x, dem=0;
		cin >> n >> x;
		nhap(a,n);
		for(int i=0;i<n;i++) {
			if(a[i]==x) {
				dem++;
			}
		}
		if(dem==0) cout << "-1" << endl;
		if(dem!=0) cout << dem << endl;
	}
}
