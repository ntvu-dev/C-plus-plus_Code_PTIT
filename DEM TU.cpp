#include<iostream>
#include<math.h>
#include<string>
#include<ctype.h>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	fflush(stdin);
	while(t--) {
		char s[1005];
		int dem=0, i;
		cin.getline(s,1005);
		for(i=0;i<strlen(s);i++) {
			if(s[i]==' ' && s[i+1]==' ') {
				dem++;
			}
		}
		if(s[0]==' ') dem++;
		cout << dem << endl;
	}
}

