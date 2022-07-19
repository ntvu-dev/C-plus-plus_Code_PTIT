#include<iostream>
#include<stdbool.h>

using namespace std;

bool kt(int n) {
 while(n > 0) {
  int str = n % 10;
  if (str != 0 && str != 6 && str != 8)
   return false;
  n = n / 10;
 }
 return true;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		if(kt(n)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
