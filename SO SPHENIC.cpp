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
		int count=0, count1=0;
		for(int i=2;i<=n;i++) {
			if(n%i==0) count++;
			while(n%i==0) {
				n=n/i;
				count1++;
			}
		}
		if(count==count1 && count==3) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}

