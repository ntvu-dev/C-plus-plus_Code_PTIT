#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

void loading() {
	string s;
		cin >> s;
		string s1=" ";
		for(int i=0;i<s.length();i++) {
			string s2=" ";
			if(s[i]>='0' && s[i]<='9') {
				for(int j=i;j<=s.length();j++) {
					if(s[j]>='a' && s[j]<='z' || s[j]=='\0') {
						s2=s.substr(i,j-i);
						if(((s2.length() > s1.length()) || s2.length() == s1.length()) && s2>s1) s1=s2;
						i=j;
						break;
					}
				}
			}
		}
		cout << s1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
	return 0;
}

