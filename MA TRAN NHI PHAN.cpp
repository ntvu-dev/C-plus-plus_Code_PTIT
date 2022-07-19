#include<iostream>
#include<math.h>
#include<stdbool.h>

using namespace std;

void nhap(int A[][3], int n) {
	for(int i=0;i<n;i++) {
		for(int j=0;j<3;j++) {
			cin >> A[i][j];
		}
	}
}

int main() {
	int n, dem0[1005], dem1[1005];
	int A[1005][3];
	cin >> n;
	for(int i=0;i<n;i++) {
		dem0[i]=0;
		dem1[i]=0;
	}
	nhap(A,n);
	for(int i=0;i<n;i++) {
		for(int j=0;j<3;j++) {
			if(A[i][j]==0) dem0[i]++;
			if(A[i][j]==1) dem1[i]++;
		}
	}
	int count=0;
	for(int i=0;i<n;i++) {
		if(dem0[i]<dem1[i]) count++;
	}
	cout << count;
}
