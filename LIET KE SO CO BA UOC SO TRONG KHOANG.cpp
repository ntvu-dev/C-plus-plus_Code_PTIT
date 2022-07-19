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

int loading(int n) {
	int c=sqrt(n);
	if(snt(c)) return 1;
	else return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long a, b;
		int dem=0;
		cin >> a >> b;
		for(int i=a;i<=b;i++) {
			if(loading(i)) {
				dem++;
			}
		}
		cout << dem << endl;
	}
}

