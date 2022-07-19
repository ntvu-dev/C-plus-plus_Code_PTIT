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
		int a, b;
		int dem=0;
		cin >> a >> b;
		for(int i=a;i<=b;i++) {
			if(snt(i)) {
				dem++;
			}
		}
		cout << dem << endl;
	}
}

