#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long a;
		cin >> a;
		long long f1=0, f2=1, fn=1;
		while(fn<a){
            fn=f1+f2;
            f1=f2;
            f2=fn;
        }
        if(fn==a||a==0)   cout << "YES" <<endl;
        else cout << "NO" <<endl;
    }
}

