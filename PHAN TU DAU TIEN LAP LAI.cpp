#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}
		int x=-1;
		for(int i=1;i<n;i++) {
			for(int j=0;j<i;j++) {
				if(a[j]==a[i]) {
					x=a[i];
					break;
				}
				if(x!=-1) break;
			}
		}
		cout << x << endl;
	}
	return 0;
}

