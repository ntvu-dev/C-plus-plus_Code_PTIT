#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[n][m]={}, s[n][m]={};
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				cin >> a[i][j];
			}
		}
		for(int i=0;i<n;i++) {
			s[i][0]=a[i][0];
		}
		for(int i=0;i<n;i++) {
			s[0][i]=a[0][i];
		}
		for(int i=1;i<n;i++) {
			for(int j=1;j<m;j++) {
				if(a[i][j]==1) {
					s[i][j]=min(s[i][j-1],min(s[i-1][j],s[i-1][j-1]))+1;
				}
				else {
					s[i][j]=0;
				}
			}
		}
		int max=0;
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				if(s[i][j]>max) max=s[i][j];
			}
		}
		cout << max << endl;
	}
}

