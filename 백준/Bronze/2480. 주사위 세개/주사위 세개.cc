#include <bits/stdc++.h>
using namespace std;
int a[3];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> a[0] >> a[1] >> a[2];
	sort(a, a+3);
		
	if (a[0] == a[2]) cout << 10000+a[0]*1000;
	else if (a[0] != a[1] && a[0] != a[2] && a[1] != a[2]) cout << 100*a[2];
	else {
		if (a[0] == a[1]) cout << 1000+a[0]*100;
		else if (a[1] == a[2]) cout << 1000+a[1]*100;
		else cout << 1000+a[2]*100;		
	}
}