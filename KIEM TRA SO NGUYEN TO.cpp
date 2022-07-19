#include<iostream>
#include<math.h>
#include<stdbool.h>

using namespace std;

bool snt(long long a){
	if(a<2) {
		return 0;
	}
	for (int i=2;i<=sqrt(a);i++){
		if (a%i==0){
			return 0;
			break;
		}
	}
	return 1;
}

int main() {
	long long n;
	cin >> n;
	if(snt(n)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
