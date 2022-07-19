#include<iostream>
#include<math.h>
#include<stdbool.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		int count=0;
		int c=sqrt(n);
		for(int i=1;i<=c;i++) {
			if(n%i==0 && i%2==0) {
				count++;
			}
			if(n%i==0 && (n/i)%2==0) {
				count++;
			}
		}
		if(c*c==n && n%2==0) {
			cout << count-1 << endl;
		}
		else {
			cout << count << endl;
		}
	}
	return 0;
}
