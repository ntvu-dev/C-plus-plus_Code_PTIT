#include<iostream>
#include<math.h>

using namespace std;

void nhap(int a[][100], int m, int n) {
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			cin >> a[i][j];
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, a[100][100];
		cin >> n;
		nhap(a,n,n);
		int chan=0, le=1;
		while(chan < n || le < n) {
			for(int i=0;i<n;i++) {
			    cout << a[chan][i] << " ";
		    }
		    if(chan==n-1) break;
		    for(int i=n-1;i>=0;i--) {
			    cout << a[le][i] << " ";
		    }
		    if(le==n-1) break;
		    chan+=2;
		    le+=2;
		}
		cout << endl;
	}
}

