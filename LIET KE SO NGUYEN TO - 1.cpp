#include<iostream>
#include<math.h>
#include<stdbool.h>

using namespace std;

bool snt(int n) {
	if(n<2) {
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) {
			return 0;
			break;
		}	
	}
	return 1;
}

int main() {
	int a, b;
	cin >> a >> b;
	if(a>b) {
		int temp=a;
		a=b;
		b=temp;
	}
	for(int i=a+1;i<b;i++) {
		if(snt(i)) {
			cout << i << " ";
		}
	}
}
