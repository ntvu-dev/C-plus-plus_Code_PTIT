#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

bool checktn(string s) {
	int i=0, j=s.length()-1;
		while(i<s.length()/2) {
			if(s[i]!=s[j])  {
				return false;
			    i++;
		    	j--;
			}
			return true;
		}
}

bool checkchan(string s) {
	for(int i=0;i<s.length();i++) {
		if((s[i]-'0')%2!=0) {
			return false;
			break;
		}
		return true;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		if(checkchan(s) && checktn(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}


