#include<iostream>
#include<math.h>
#include<algorithm>
#include<functional>

using namespace std;

void nhap(int a[], int n) {
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {  
		int a[100005], b[100005], n;
		cin >> n;
		nhap(a,n);
		sort(a,a+n);
		for(int i=1;i<n;i++) {
			b[i]=a[i]-a[i-1];
		}
		sort(b+1,b+n-1);
		cout << b[1] << endl;
	}
}

