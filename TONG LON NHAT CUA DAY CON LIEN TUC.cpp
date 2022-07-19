#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}
		int x=*max_element(a,a+n);
		if(x<0) {
			cout << x << endl;
			return;
		}
		long long res=0, s=0;
		for(int i=0;i<n;i++) {
			s+=a[i];
			if(s<0) s=0;
			res=max(res,s);
		}
		cout << res << endl;
	}
}

