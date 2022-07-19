#include<iostream>
#include<math.h>

using namespace std;

int snt(int n) {
	if(n<2) {
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) {
			return 0;
			break;
		}
	}
	return 1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int d=0;
		for(int i=2;i<=(n/2);i++) {
			if(snt(i) && snt(n-i)) {
				d=1;
				cout << i << " " << n-i;
				break;
			}	
		}
		if(d==0) {
			cout << "-1";
			}
		cout << endl;
	}
}

