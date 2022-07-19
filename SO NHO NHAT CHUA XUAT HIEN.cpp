#include<iostream>
#include<math.h>
#include<algorithm>
#include<functional>

using namespace std;

void nhap(long long a[], long long n) {
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, a[100005];
		cin >> n;
		int min=1;
		nhap(a,n);
		for(long long i=0;i<n;i++) {
			if(a[i]<0) {
			continue;
			}
			if(a[i]==min) {
				min++;
			}
	    }	
	    cout << min << endl;
	}
	return 0;
}

