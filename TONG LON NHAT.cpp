#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

void importarray(long long a[], int n) {
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
		long long a1[n], a2[m];
		importarray(a1,n);
		importarray(a2,m);
		long long value=0;
		if(n>m) {
			for(int i=0;i<m;i++) {
				if(a2[i]<a1[i]) value=max(value,a2[i]+a1[n-1]-a1[i]);
			}
		}
		else {
			if(n<m) {
				for(int i=0;i<n;i++) {
					if(a1[i]>a2[i]) {
						value=max(value,a1[i]+a2[m-1]-a2[i]);
					}
				}
			}
			else {
				for()
			}
		}
	}
}

