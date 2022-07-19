#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

const long long mod=1e9+7;

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    long long a[n+1];
	    a[0]=0, a[1]=1;
	    for(int i=2;i<=n;i++) {
		   a[i]=(a[i-1]+a[i-2]) %mod;
	    }
	    cout << a[n] << endl;		
	}
}

