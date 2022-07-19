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
		int n;
		cin >> n;
		int a[n];
		nhap(a,n);
		int sum=0;
		int b[100005]={0}, i, j;
		for(i=0;i<n;i++) {
			if(b[i]==0) {
				b[i]=1;
				for(j=i+1;j<n;j++) {
					if(a[i] == a[j]){
					b[i]++;
					b[j] = -1;
				}
				}
			}
		}
		for(i=0;i<n;i++) {
			if(b[i] > 1) sum+=b[i];
		}
		cout << sum << endl;
	}
}

