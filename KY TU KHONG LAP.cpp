#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>

using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
	    getline(cin,s);
	    int count=1;
    	for(int i=0;i<s.length();i++) {
		count=1;
		for(int j=0;j<s.length();j++) {
			if(s[i]==s[j] && i!=j) count=0;
	    	}
		    if(count==1) cout << s[i];
	    }
	    cout << endl;
    }
	return 0;
}

