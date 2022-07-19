#include<iostream>
#include<stdbool.h>
#include<math.h>
#include<string.h>

using namespace std;

void loading(string s) {
	for(int i=0;i<s.length();i++) {
		if(s[i]-'0'==0 && s[i+1]-'0'==8 && s[i+2]-'0'==4) {
			for(int j=i;j<=i+2;j++) {
				s[j]='a';
			}
		}
	}
	for(int i=0;i<s.length();i++) {
		if(s[i]!='a') cout << s[i];
	}
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;;
		cin >> s;
		loading(s);
		cout << endl;
	}
	return 0;
}
