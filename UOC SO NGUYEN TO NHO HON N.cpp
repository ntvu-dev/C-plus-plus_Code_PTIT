#include<iostream>
#include<math.h>
#include<stdbool.h>

using namespace std;

int snt(int n) {
	if(n<2) {
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) {
			return 0;
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
		if(n>=2) {
			cout << "2" << " ";
		}
		for(int i=3;i<=n;i++) {
			if(snt(i)==1) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
