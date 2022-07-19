#include<iostream>
#include<math.h>

using namespace std;

void nhap(int a[], int n) {
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
}

void up(int a[], int n) {
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
}

int main() {
	int n, a[1005];
	cin >> n;
	nhap(a,n);
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i]==a[j]) {
				for(int k=j;k<n-1;k++) {
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	up(a,n);
}
