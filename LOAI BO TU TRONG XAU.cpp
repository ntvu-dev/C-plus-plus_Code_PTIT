#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int main() {
	string s, del;
	getline(cin,s);
	getline(cin,del);
	int value=s.find(del);
	s.erase(value,del.size());
	cout << s << endl;
}

