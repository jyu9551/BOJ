#include <bits/stdc++.h>
using namespace std;
long long a,b,c;

long long power(long long b) {
	if (b == 0) return 1;
	if (b == 1) return a % c;
	
	if (b % 2 == 0) return power(b/2) % c * power(b/2) % c;
	return power(b/2) % c * power(b/2) % c * a % c;
}
int main(){
	cin >> a >> b >> c;
	cout << power(b);
}
