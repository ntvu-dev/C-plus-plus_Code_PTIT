#include<iostream>
#include<math.h>
#include<string.h>
#include<ctype.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int str = n % 100;
		if(str==86) cout << "1" << endl;
		else cout << "0" << endl;
	}
	return 0;
}
