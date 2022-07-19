#include<iostream>
#include<math.h>

using namespace std;

void nhap(int a[], int n) {
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
}

void ghep(int a[], int b[], int c[], int n, int m) {
	for(int i=0;i<n;i++) {
		c[i]=a[i];
	}
	int k=0;
	for(int i=n;i<n+m;i++) {
		c[i]=b[k++];
	}
}

void noibot(int a[], int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i]>a[j]) {
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, a[100005], b[100005], c[100005]={-1};
		cin >> n >> m;
		nhap(a,n);
		nhap(b,m);
		ghep(a,b,c,n,m);
		noibot(c,n+m);
	}
	return 0;
}
