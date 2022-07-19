#include<iostream>
#include<math.h>

using namespace std;

long long sum(long long n) {
	int sum=0;
	while(n>0) {
		long long temp=n%10;
		sum+=temp;
		n/=10;
	}
	return sum;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		while(n>=10) {
			n=sum(n);
		}
		cout << sum(n) << endl;
	}
}

