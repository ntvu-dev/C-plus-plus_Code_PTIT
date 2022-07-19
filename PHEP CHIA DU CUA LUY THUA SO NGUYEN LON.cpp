#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int value(long long x, long long y, long long z) {
	if(y==1) {
		return x%z;
	}
	long long temp=value(x,y/2,z);
	if(y%2==0) {
		return temp*temp%z;
	}
	else {
		return (temp*temp)%z *x%z;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string a;
		long long b, m;
		cin >> a >> b >> m;
		long long mod=0;
		for(int i=0;i<a.length();i++) {
			mod=(mod*10+a[i]-'0')%m;
		}
		cout << value(mod,b,m) << endl;
	}
	return 0;
}

