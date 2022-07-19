#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		cin.ignore();
		string s;
		getline(cin, s);
		int l = s.length();
		int count = 1;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == ' ' && s[i+1] != ' ') {
				//s.erase(s.begin() + i);
				count++;
			}
		}
		//cout << l - s.length() + 1 << endl;
		cout << count << endl;
	}
	return 0;
}

