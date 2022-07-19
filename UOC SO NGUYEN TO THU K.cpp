#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k, d=0, a[105]={-1};
		cin >> n >> k;
		for(int i=2;i<=n;i++) {
			while(n%i==0) {
				d++;
				a[d]=i;
				n=n/i;
			}
		}
		if(k>d) cout << "-1" << endl;
		if(k<=d) cout << a[k] << endl;
	}
}
