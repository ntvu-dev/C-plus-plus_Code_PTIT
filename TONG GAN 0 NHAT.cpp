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
		int min=1e6+5;
		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				if(abs(a[i]+a[j])<abs(min)) {
					min=a[i]+a[j];
				}
			}
		}
		cout << min << endl;
	}
}

