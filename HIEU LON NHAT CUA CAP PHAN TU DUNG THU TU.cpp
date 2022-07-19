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
		int value=-1;
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}
		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				if(a[i]<a[j]) value=max(value, a[j]-a[i]);
			}
		}
		cout << value << endl;
	}
	return 0;
}

