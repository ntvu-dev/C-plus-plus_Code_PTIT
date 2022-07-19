#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int n, a[50][50];
vector<int>res1, res2;

void loading() {
	int l=1, r=n, top=1, bot=n;
	while(l<r && top<bot) {
		for(int i=top;i<=bot;i++) res1.push_back(a[i][l]), res2.push_back(a[n-i+1][n-l+1]);
		l++, r--;
		for(int i=l;i<=r;i++) res1.push_back(a[bot][i]), res2.push_back(a[n-bot+1][n-i+1]);
		top++;
		for(int i=bot;i>=top;i--) res1.push_back(a[i][r]), res2.push_back(a[n-i+1][n-r+1]);
		l++, r--;
		for(int i=r;i>=l;i--) res1.push_back(a[top][i]), res2.push_back(a[n-top+1][n-i+1]);
		top++, bot-=2;
	}
}

void loading2() {
	res1.clear(); res2.clear();
	cin >> n; n*=4;
	int temp=1;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			a[i][j]=temp++;
		}
	}
	loading();
	for(int i=res2.size()-1;i>=0;i--) {
		if(res2[i]==res2[i-1]) cout << res2[i] << " ", i--;
		else cout << res2[i] << " ";
	}
	cout << endl;
	for(int i=res1.size()-1;i>=0;i--) {
		if(res1[i]==res1[i-1]) cout << res1[i] << " ", i--;
		else cout << res1[i] << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading2();
	}
	return 0;
}

