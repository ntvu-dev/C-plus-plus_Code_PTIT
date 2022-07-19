#include<iostream>
#include<math.h>

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
		int n, a[105];
		cin >> n;
		nhap(a,n);
		int t=0;
		for(int i=0;i<n-1;i++) {
		    for(int j=i+1;j<n;j++) {
			    if(a[i]==a[j])
			    t=1;
			    break;
			}
		}
		int min1 = a[0];
		for(int i=0;i<n;i++) {
			if(a[i] < min1) 
			min1=a[i];
		}
		int min2 = a[0];
		for(int i=0;i<n;i++) {
			if(a[i] < min2 && a[i] != min1) 
			min2=a[i];
		}
		if(t==0) {
		   cout << min1 << " " << min2 << endl;	
		}
		else cout << "-1" << endl;
	}
}
