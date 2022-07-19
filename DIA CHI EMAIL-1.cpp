#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int main() {
	string s;
	getline(cin,s);
	while(s[s.size()-1]==' ') {
		s.erase(s.begin()+s.size()-1);
	}
	int danhdau=0;
	for(int i=0;i<s.size();i++) {
		if(s[i]>='A' && s[i]<='Z') {
			s[i]=s[i]+' ';
		}
	}
	for(int i=s.size()-1;i>=0;i--) {
		if(s[i]==' ') {
			danhdau=i;
			break;
		}
	}
	for(int i=danhdau+1;i<s.size();i++) {
		cout << s[i];
	}
	for(int i=0;i<danhdau;i++) {
		if(i==0 || s[i]!=' ' &&s[i-1]==' ') {
			cout << s[i];
		}
	}
	cout << "@ptit.edu.vn" << endl;
}

