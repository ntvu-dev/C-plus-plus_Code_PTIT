#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

void import(int a[], int n) {
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n],b[n]={};
		import(a,n);
		sort(a,a+n);
		for(int i=0;i<n-1;i++) {
			for(int j=i+1;j<n;j++) {
				if(a[i]==a[j]) {
					for(int k=j;k<n;k++) {
						a[k]=a[k+1];
					}
					n--;
					j--;
				}
			}
		}
		int L=a[n-1], R=a[0];
		cout << L-R+1-n << endl;
	}
	return 0;
}

