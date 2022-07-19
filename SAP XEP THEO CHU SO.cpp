#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

bool cmp(string a, string b) {
	string ab=a+b;
	string ba=b+a;
	return (ab>ba);
}

void loading() {
	string s[100005];
	int n;
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> s[i];
	}
	sort(s,s+n, cmp);
	for(int i=0;i<n;i++) {
		cout << s[i];
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

