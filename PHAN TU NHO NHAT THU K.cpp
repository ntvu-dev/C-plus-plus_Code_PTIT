#include<iostream>
#include<math.h>
#include<algorithm>
#include<functional>  //  std: : greater;

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
		int n, k, a[100005];
		cin >> n >> k;
		nhap(a,n);
		sort(a,a+n);
		cout << a[k-1] << endl;
	}
}

