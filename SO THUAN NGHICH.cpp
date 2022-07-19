#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		long long c=n, b=0;
		while(n>0) {
			b=n%10+b*10;
			n/=10;
		}
		if(b==c) cout << "YES\n";
		else cout << "NO\n";
	}
}
