#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int a[n], sum[n];
		for(int i=0;i<n;i++) {
			cin >> a[i];
			sum[i]=a[i];
		}
		for(int i=1;i<n;i++) {
			sum[i]+=sum[i-1];
		}
		if(sum[n-1]<=x) {
			cout << "-1" << endl; 
		}
		else {
		int res=INT_MAX;
		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				if(sum[j]-sum[i]+a[i]>x) {
					res=min(res,j-i+1);
					break;
				}
			}
		}
		cout << res << endl;
	}
}
}

