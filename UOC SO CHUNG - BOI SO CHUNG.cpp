#include<iostream>
#include<math.h>

using namespace std;

int ucln(long long a,long long b) {
	while(a!=b) {
			if(a>b) {
				a=a-b;
			}
			else {
				b=b-a;
			}
		}
	return a;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long a, b;
		cin >> a >> b;
		int c=ucln(a,b);
		cout << (a*b)/c;
		cout << " ";
		cout << ucln(a,b) << endl;
	}
}
