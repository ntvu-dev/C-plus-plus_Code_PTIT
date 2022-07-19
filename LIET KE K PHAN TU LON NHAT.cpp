#include<iostream>
#include<math.h>

using namespace std;

void nhap(int a[], int n) {
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
}

void loading(int a[], int n, int k) {
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i] < a[j]) {
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<k;i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, a[1005], k;
		cin >> n >> k;
		nhap(a,n);
		loading(a,n,k);
		cout << endl;
	}
}
