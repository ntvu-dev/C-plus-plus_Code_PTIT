#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

const int mod=1e9+7;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}
		long long sum=0, pow=1;
		for(int i=n-1;i>=0;i--) {
			sum=(sum+a[i]*pow)%mod;
			pow=(pow*x)%mod;
		}
		cout << sum << endl;
	}
	return 0;
}

