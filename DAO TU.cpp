#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

void loading() {
	string s;
		getline(cin, s);	
		string res = " ";
		for(int i=0;i<=s.size();i++) {
			if(s[i]==' ' || s[i]=='\0') {
				string sub=s.substr(0,i);
				s.erase(0, i+1);
				res=sub+' '+res;
			    i=0;
			}
			if(s[i]=='\0') {
				break;
			}
		}
		cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		loading();
	}
	return 0;
}

