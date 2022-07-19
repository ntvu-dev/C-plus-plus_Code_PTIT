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
		int n;
		cin >> n;
		int a[n][n];
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				cin >> a[i][j];
			}
		}
		int sumh[n]={}, sumc[n]={};
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				sumh[i]+=a[i][j];
				sumc[i]+=a[j][i];
			}
		}
		int maxsum=*max_element(sumh,sumh+n);
		if(*max_element(sumc,sumc+n)>maxsum) maxsum=*max_element(sumc,sumc+n);
		int count=0;
		for(int i=0,j=0;i<n,j<n; ) {
			int temp=min(maxsum-sumh[i],maxsum-sumc[i]);
			a[i][j]+=temp;
			sumh[i]+=temp;
			sumc[j]+=temp;
			count+=temp;
			if(sumh[i]==maxsum) i++;
			if(sumc[j]==maxsum) j++;
		}
		cout << count << endl;
	}
	return 0;
}

