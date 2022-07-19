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
		int a[100005];
		int n, x, kt=0, dem=0;
		cin >> n >> x;
		nhap(a,n);
		for(int i=0;i<n;i++) {
			if(a[i]==x) {
				dem=i;
				kt=1;
				break;
			}
		}
		if(kt==1) cout << dem+1 << endl;
		if(kt==0) cout << "-1" << endl;
	}
}
