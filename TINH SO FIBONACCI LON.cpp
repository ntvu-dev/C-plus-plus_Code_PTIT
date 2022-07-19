#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		long long f1=1, f2=1, f=1;
		if(n==1 || n==2) {
			cout << "1" << endl;
		}
		for(int i=3;i<=n;i++) {
			f=f1+f2;
			f1=f2;
			f2=f;
		}
		cout << f << endl;
	}
}

