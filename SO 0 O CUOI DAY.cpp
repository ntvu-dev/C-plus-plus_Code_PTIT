#include<iostream>
#include<math.h>
#include<algorithm>
#include<functional>

using namespace std;

void nhap(long long a[], long long n) {
	for(long long i=0;i<n;i++) {
		cin >> a[i];
	}
}

void in(long long a[], long long n) {
	for(long long i=0;i<n;i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, d=0;
		long long a[100005];
		cin >> n;
		nhap(a,n);
		for(int i=0;i<n;i++) {
			if(a[i]==0) {
				a[d++]=a[i];
			}
			if(a[i]!=0) cout << a[i] << " ";
		}
		for(int i=1;i<=d;i++) {
			cout << "0" << " ";
		}
		cout << endl;
	}
}

