#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

const int N=1e3+5;//10000
int prime[N];

void preloading() {
	for(int i=2;i<=sqrt(N);i++) {
		if(prime[i]==0) {
			for(int j=i*i;j<N;j+=i) {
				prime[j]=1;
			}
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		cout << 1 << " ";
		for(int i=2;i<=n;i++) {
			for(int j=2;j<=i;j++) {
				if(prime[j]==0 && i%j==0) {
					cout << j << " ";
					break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}

