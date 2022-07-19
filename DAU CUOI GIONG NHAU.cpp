#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int l=s.length();
		int value=0;
		for(int i=0;i<l;i++) {
			for(int j=1;j<=l-i;j++) {
				string sub=s.substr(i,j);
				if(sub[0]==sub[sub.length()-1]) {
					value++;
				}
			}
		}
		cout << value << endl;
	}
	return 0;
}

