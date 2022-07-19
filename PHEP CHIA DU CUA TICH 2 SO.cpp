#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

long long loading(long long a, long long b, long long c) {
	if(b==0) return 0;
	if(b==1) return a%c;
	long long temp=loading(a,b/2,c);
	if(b%2==0) return temp*2%c;
	else return (temp*2%c+a)%c;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long a, b, c;
		cin >> a >> b >> c;
		cout << loading(a,b,c) << endl;
	}
	return 0;
}

