#include<iostream>
#include<math.h>

using namespace std;

void nhap(int a[], int n) {
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
}

void sapxep(int a[], int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i] < a[j]) {
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, a[1005], b[1005]={-1}, dem1=-2, dem2=-1;
		cin >> n;
		nhap(a,n);
		sapxep(a,n);
		int i=0, j=n-1;
		while(i<=n/2 || j>n/2) {
			b[dem1+=2]=a[i];
			b[dem2+=2]=a[j];
			i++;
			j--;
		}
		if(i+j%2==0) {
			b[i+j]=a[(i+j)/2];
		}
		for(int i=0;i<n;i++) {
			cout << b[i] << " ";
		}
		cout << endl;
	}
}
