#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

void loading() {
	string x, y;
	cin >> x >> y;
	string res="";
	while(x.length()<y.length()) {
		x="0"+x;
	}
	while(x.length()>y.length()) {
		y="0"+y;
	}
	for(int i=x.length()-1;i>0;i--) {
		if(x[i]+y[i]-2*'0'<10) {
			res=char(x[i]+y[i]-'0') + res;
		}
		else {
			res=char(x[i]+y[i]-10-'0')+res;
			x[i-1]++;
		}
	}
	if(x[0]+y[0]-2*'0'<10) {
		res=char(x[0]+y[0]-'0') + res;
	}
	else {
		res=char(x[0]+y[0]-10-'0')+res;
		res="1"+res;
	}
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
	return 0;
}

