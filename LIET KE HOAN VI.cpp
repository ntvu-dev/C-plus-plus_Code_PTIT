#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int a[25], check[25]={}, n;

void exportloading() {
	for(int i=1;i<=n;i++) {
	    cout << a[i]; 	
	}
	cout << " ";
}

void loading(int i) {
	for(int j=1;j<=n;j++) {
		if(check[j]==0) {
			check[j]=1;
			a[i]=j;
			if(i==n) exportloading();
			else loading(i+1);
			check[j]=0;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		loading(1);
		cout << endl;
	}
}

