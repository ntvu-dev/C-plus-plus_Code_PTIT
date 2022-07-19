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
		sort(a,a+n);
		int start=0, end=n-1;
		while(start<end) {
			cout << a[end] << " " << a[start] << " ";
			start++;
			end--;
		}
		if(start==end) {
			cout << a[start];
		}
		cout << endl;
	}
	return 0;
}

