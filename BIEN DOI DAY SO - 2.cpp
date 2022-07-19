#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

void loading() {
	int n;
	cin >> n;
	int a[n];
	long long b[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	for(int i=1;i<n-1;i++) {
		b[i]=a[i-1]*a[i+1];
	}
	b[0]=a[0]*a[1];
	b[n-1]=a[n-1]*a[n-2];
	for(int i=0;i<n;i++) {
		cout << b[i] << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
	return 0;
}

