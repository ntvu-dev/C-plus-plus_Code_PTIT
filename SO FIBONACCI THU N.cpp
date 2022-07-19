#include<iostream>
#include<math.h>

using namespace std;

int main() {
	long long f[95];
	f[0]=0, f[1]=1;
	int i;
	for(i=2;i<=92;i++) {
		f[i]=f[i-1]+f[i-2];
	}
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >>n;
		cout << f[n] << endl;
	}
}
