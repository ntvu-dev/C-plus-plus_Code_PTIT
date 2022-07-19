#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	while (s[0] == ' ') {
		s.erase(s.begin() + 0);
	}
	while (s[s.size() - 1] == ' ') {
		s.erase(s.begin() + s.size() - 1);
	}
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ' && s[i + 1] == ' ') {
			s.erase(s.begin() + i);
			i--;
		}
	}
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = s[i] + ' ';
		}
	}
	int x = 0;
	for (int i = s.size() - 1; i >= 0; i--) {
		if (s[i] == ' ') {
			x = i;
			break;
		}
	}
	for (int i = 0; i < x; i++) {
		if (i == 0 || (s[i] != ' ' && s[i - 1] == ' ')) {
			s[i] = s[i] - ' ';
		}
	}
	s.insert(x, ",");
	for (int i = x+2; i < s.size(); i++) {
		s[i] = s[i] - ' ';
	}
	cout << s << endl;
}

