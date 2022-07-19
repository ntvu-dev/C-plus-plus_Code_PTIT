#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a, m;
		cin >> a >> m;
		int x, count = 0;
		for(int i=1;i<m;i++) {
			if(a*i%m==1) {
				cout << i << endl;
				count++;
				break;
			}
		}
		if(count==0) {
				cout << -1 << endl;
			}
	}
	return 0;
}

