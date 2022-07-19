#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    string n;
	    long long m;
	    cin >> n >> m;
	    long long mod=0;
	    for(int i=0;i<n.length();i++) {
		   mod=(mod*10+n[i]-'0')%m;
	    }
	    cout << mod<< endl;		
	}
}

