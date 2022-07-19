#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

void loading() {
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
		b[i]=a[i];
	}
	sort(b, b+n);
	int max=b[n-1];
	for(int i=0;i<n;i++) {
		if(a[i]!=max) {
			cout << *(upper_bound(b,b+n, a[i])) << " ";
		}
		else cout << "_ ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

