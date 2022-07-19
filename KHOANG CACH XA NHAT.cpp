#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

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
		int value=0;
		for(int i=0;i<n-1;i++) {
			for(int j=n-1;j>i;j--) {
				if(a[j]>a[i]) {
					value=max(value,j-i);
					break;
				}
			}
		}
		cout << value << endl;
	}
	return 0;
}

