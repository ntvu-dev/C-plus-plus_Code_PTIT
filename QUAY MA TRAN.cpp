#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

void loading() {
	int m, n;
		cin >> m >> n;
		int a[m][n], m1=m, n1=n;
		for(int i=0;i<m;i++) {
			for(int j=0;j<n;j++) {
				cin >> a[i][j];
			}
		}
		int c=0, h=0;
		int pre, cur;
		while(h<m && c<n) {
			if(h+1==m || c+1==n) break;
			pre=a[h+1][c];
			for(int i=c;i<n;i++) {
				cur=a[h][i];
				a[h][i]=pre;
				pre=cur;
			}
			h++;
			
			for(int i=h;i<m;i++) {
				cur=a[i][n-1];
				a[i][n-1]=pre;
				pre=cur;
			}
			n--;
			
			for(int i=n-1;i>=c;i--) {
				cur=a[m-1][i];
				a[m-1][i]=pre;
				pre=cur;
			}
			m--;
			
			for(int i=m-1;i>=h;i--) {
				cur=a[i][c];
				a[i][c]=pre;
				pre=cur;
			}
			c++;
			
			for(int i=0;i<m1;i++) {
				for(int j=0;j<n1;j++) {
					cout << a[i][j] << " ";
				}
			}
			cout << endl;
		}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
	return 0;
}

