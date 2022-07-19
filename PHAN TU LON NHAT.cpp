#include<iostream>
#include<math.h>
#include<stdbool.h>

using namespace std;

void nhap(int A[], int n) {
	for(int i=0;i<n;i++) {
		cin >> A[i];
	}
}

int main() {
	int t, A[10005];
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		nhap(A, n);
		int max=A[0];
		for(int i=1;i<n;i++) {
			if(A[i] > max) max=A[i];
		}
		cout << max << endl;
	}
}
