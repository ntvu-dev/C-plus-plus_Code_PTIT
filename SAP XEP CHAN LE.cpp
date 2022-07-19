#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

void loading() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	int b[n]={}, count=0;
	for(int i=0;i<n;i+=2) b[i]=a[count++];
	for(int i=1;i<n;i+=2) b[i]=a[count++];
	for(int i=0;i<n;i++) cout << b[i] << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

