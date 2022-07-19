#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int d=0;
		long long a[105]={-1};
		long long n;
		cin >> n;
		for(int i=2;i<=sqrt(n);i++) {
			while(n%i==0) {
				d++;
				a[d]=i;
				n=n/i;
			}
		}
		if(n>1) {
			d++;
			a[d]=n;
		}
		long long max=a[1];
	    for(int i=1;i<=d;i++) {
		    if(a[i]>max) {
			max=a[i];
		    }
	    }
	    cout << max << endl;
	}
	return 0;
}
