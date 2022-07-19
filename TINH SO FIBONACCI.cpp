#include<iostream>
#include<math.h>

using namespace std;

long long f[105];

void fi() {
	f[0]=0, f[1]=1, f[2]=1;
	for(int i=3;i<=105;i++) {
		f[i]=f[i-2]+f[i-1];
	}
}

int main() {
	int t;
	cin >> t;
	fi();
	while(t--) {
		int n;
		cin >> n;
		cout << f[n] << endl;
	}
}

