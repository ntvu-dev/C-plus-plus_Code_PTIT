#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

struct data{
	int val,pos;
};
bool cmp(data a,data b) {
	if(a.val<b.val) return true;
	else if(a.val==b.val&&a.pos<b.pos) return true;
	return false;
}

void loading() {
	int n;
	cin >> n;
	vector<data> a(n);
	for(int i=0;i<n;i++) {
		cin >> a[i].val;
		a[i].pos=i;
	}
	sort(a.begin(),a.end(),cmp);
	int res=0;
	for(int i=0;i<n;i++) {
		while(a[i].pos!=i) {
			res++;
			swap(a[i],a[a[i].pos]);
		}
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

