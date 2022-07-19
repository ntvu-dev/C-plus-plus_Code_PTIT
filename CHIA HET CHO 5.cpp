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
		cin >> s;
		reverse(s.begin(),s.end());
		string s1=s;
//		for(int i=0;i<s.length();i+=4) {
//			s[i]='1';
//			s[i+1]='2';
//			s[i+2]='4';
//			s[i+3]='3';
//		}
//		for(int i=0;i<s.length();i++) {
//			if(s1[i]='0'==0) s[i]='0';
//		}
//		int sum=0;
//		for(int i=0;i<s.length();i++) {
//			sum+=s[i]-'0';
//		}
//		if(sum%5==0) cout << "Yes" << endl;
//		else cout << "No" << endl;
        cout << s1 << endl;
	}
}

