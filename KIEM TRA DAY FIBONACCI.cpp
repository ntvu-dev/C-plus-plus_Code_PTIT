#include<iostream>
#include<math.h>

using namespace std;

void nhap(int a[], int n) {
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
}

int fi(int a) {
	int f1=0, f2=1, fn=1;
	while(fn<a) {
		fn=f1+f2;
		f1=f2;
		f2=fn;
	}
	if(fn==a || a==0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
		cin >> n;
		int a[n];
		nhap(a,n);
		for(int i=0;i<n;i++) {
			if(fi(a[i])) cout << a[i] << " ";
		}
		cout << endl;	
	}
}

