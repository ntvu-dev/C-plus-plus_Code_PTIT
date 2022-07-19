#include<iostream> 
#include<math.h>

using namespace std;

int main() {
	int a[105]={-1}, d=0;
	int n;
	cin >> n;
	for(int i=2;i<=sqrt(n);i++) {
		while(n%i==0) {
			d++;
			a[d]=i;
			n=n/i;
		}
	}
	if(n>1) {
		d++;
		a[d]=n;
	}
	int dem=1;
	for(int i=1;i<=d;i++){
		if(a[i]==a[i+1]) {
			dem++;
		}
		else {
			cout << a[i] << " " << dem << endl;
			dem=1;
		}
	}
	return 0;
}
