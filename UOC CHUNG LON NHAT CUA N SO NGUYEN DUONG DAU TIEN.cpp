#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		long long value=1;
		for(long long i=1;i<=n;i++) {
			value=value*i/__gcd(value,i);
		}
		cout << value << endl;
	}
	return 0;
}

