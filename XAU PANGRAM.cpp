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
		string s;
		int k;
		cin >> s >> k;
		for(int i=0;i<s.length();i++) {
			if(s[i]>='a' && s[i]<='z') s[i]=s[i]-' ';
		}
		sort(s.begin(),s.end());
		int count=1;
		for(int i=1;i<s.length();i++) {
			if(s[i]!=s[i-1]) count++;
		}
		if(count+k>=26) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}

