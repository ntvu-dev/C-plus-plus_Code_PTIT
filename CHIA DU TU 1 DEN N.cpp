#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		long long k;
		cin >> n >> k;
		long long value=0;
		for(int i=1;i<=n;i++) {
			value+=i%k;
		}
		cout << value << endl;
	}
	return 0;
}

