#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

void loading() {
	int n, m;
	cin >> n >> m;
	int a[100005], b[100005], x1[100005], x2[100005];
	for(int i=0;i<100000;i++) {
		x1[i]=0;
		x2[i]=0;
	}
	for(int i=0;i<n;i++) {
		cin >> a[i];
		x1[a[i]]=1;
	}
	for(int i=0;i<m;i++) {
		cin >> b[i];
		x2[b[i]]=1;
	}
	for(int i=0;i<100000;i++) {
		if(x1[i]==1 || x2[i]==1) cout << i << " ";
	}
	cout << endl;
	for(int i=0;i<100000;i++) {
		if(x1[i]==1 && x2[i]==1) cout << i << " ";
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

