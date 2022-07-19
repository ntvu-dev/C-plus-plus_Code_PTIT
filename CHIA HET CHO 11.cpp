#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		cin >> s;
		int str=0;
		for(int i=0;i<s.length();i++) {
		str = (str*10+(s[i]-'0')) % 11;
		}
		if(str==0) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}

