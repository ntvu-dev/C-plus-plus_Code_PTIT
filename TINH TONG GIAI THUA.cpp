#include<iostream>

using namespace std;

long long tong(int n) {
	long long Sum=0;
	long long P=1;
	for(int i=1;i<=n;i++) {
		P*=i;
		Sum+=P;
	}
	return Sum;
}

int main() {
	int n;
	cin >> n;
	cout << tong(n);
	return 0;
}
