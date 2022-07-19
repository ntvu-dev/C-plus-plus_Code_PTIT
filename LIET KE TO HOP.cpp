#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int a[16], n, k;

void exportloading() {
	for(int i=1;i<=k;i++) {
		cout << a[i];
	}
	cout << " ";
}

void loading(int i) {
	for(int j=a[i-1]+1;j<=n-k+i;j++) {
		a[i]=j;
		if(i==k) exportloading();
		else loading(i+1);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		loading(1);
		cout << endl;
	}
}

