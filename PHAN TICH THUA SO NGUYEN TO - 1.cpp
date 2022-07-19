#include<iostream> 
#include<math.h>

using namespace std;

void pt(int n) {
	int dem;
	for(int i=2;i<=n;i++) {
		dem=0;
		while(n%i==0) {
			dem++;
			n=n/i;
		}
		if(dem!=0) cout << i << " " << dem << " ";
		if(n==1) break;
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		pt(n);
		cout << endl;
	}
	return 0;
}
