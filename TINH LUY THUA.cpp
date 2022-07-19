#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long x, y , p;
		cin >> x >> y >> p;
		long long value = 1;
		for(int i=1;i<=y;i++) {
			value=value*x%p;
		}
		cout << value << endl;
	}
	return 0;
}

