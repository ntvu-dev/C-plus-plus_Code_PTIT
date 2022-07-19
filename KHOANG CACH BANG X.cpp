#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

void loading() {
	int n, k, res=-1;
	cin >> n >> k;
	int a[n], f[100005]={};
	for(int i=0;i<n;i++) {
		cin >> a[i];
		f[a[i]]++;
	}
	for(int i=0;i<n;i++) {
		if(f[abs(a[i]+k)]>0) {
			res=1;
			break;
		}
	}
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

