#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int c[1005][1005];
const long long mod=1e9+7;

int main() {
	int t;
	cin >> t;
	for(int i=0;i<=1000;i++) {
		for(int j=0;j<=i;j++) {
			if(j==0 || i==j) c[i][j]=1;
			else c[i][j]=(c[i-1][j]%mod+c[i-1][j-1]%mod)%mod;
		}
	}
	while(t--) {
		int n, k;
		cin >> n >> k;
		cout << c[n][k] << endl;
	}
	return 0;
}

