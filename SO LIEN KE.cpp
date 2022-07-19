#include<bits/stdc++.h>
using namespace std;
bool kem1(long long x){
        while(x>0){
            int i=x%10;
            x/=10;
            int j=x%10;
            if(i-j!=1&&j-i!=1)  {return false;break;}
            x/=10;
        }
        return true;
    }
int main(){
    int t;  cin >> t;
    while(t--){
        long long d;
        cin >> d;
        if(kem1(d)==false)  cout << "NO" << endl;
        else cout << "YES" << endl;
    }
return 0;
}
