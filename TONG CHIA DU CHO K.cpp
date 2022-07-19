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
		long long check=k;
		long long value=0;
		for(int i=1;i<=n;i++) {
			value+=i%k;
		}
		if(check==value) cout << "1" << endl;
		else cout << "0" << endl;
	}
	return 0;
}

