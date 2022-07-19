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
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	for(int i=0;i<n-1;i++) {
		if(a[i]==0) continue;
		if(a[i]==a[i+1]) {
			a[i]*=2;
			a[i+1]=0;
		}
	}
	int count = 0;
	for(int i=0;i <n;i++) {
		if(a[i]!=0) {
			cout << a[i] << " ";
			count++;
		}
    }
 	for(int i=0;i<n-count;i++) {
 		cout << "0" << " ";
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

