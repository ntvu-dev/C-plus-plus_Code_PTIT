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
		int n, k;
		cin >> n >> k;
		int a[n], b[n];
		for(int i=0;i<n;i++) {
			cin >> a[i];
			b[i]=a[i];
		}
		for(int i=1;i<k;i++) {
			b[i]+=b[i-1];
		}
		for(int i=k;i<n;i++) {
			b[i]=b[i]+b[i-1]-a[i-k];
		}
		int max=-INT_MAX, mark=0;
		for(int i=k;i<n;i++) {
			if(b[i]>max) {
				max=b[i];
				mark=i;
			}
		}
		for(int i=mark-k+1;i<=mark;i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}

