#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main() {
	int n; 
	double sum;
	cin >> n;
	sum=0;
	for(int i=1;i<=n;i++) {
		sum+=(1.0000/i);
	}
	cout << setprecision(4) << fixed << sum;
}

