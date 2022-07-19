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
		int n;
		cin >> n;
		long long a[n], b[n];
		for(int i=0;i<n;i++) {
			b[i]=-1;
		}
		import(a,n);
		for(int i=0;i<n;i++) {
			if(a[i]<n) {
				b[a[i]]=a[i];
			}
		}
		for(int i=0;i<n;i++) {
			cout << b[i] << " ";
		}
		cout << endl;
	}
	return 0;
	
}

