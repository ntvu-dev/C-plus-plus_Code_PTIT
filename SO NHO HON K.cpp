#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

void loading() {
	long long n, k;
	cin >> n >> k;
	long long a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	long long count=0;
	for(long long i=0;i<n;i++) if(a[i] <= k) count++;
	long long count2=0;
	for(int j=0;j<count;j++) if(a[j]>k) count2++;
	long long count3=count2;
	for(long long i=0,j=count;i<n,j<n;i++,j++) {
		if(a[i]>k) count2--;
		if(a[j]>k) count3++;
		count3=min(count3, count2);
	}
	cout << count3 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
	return 0;
}

