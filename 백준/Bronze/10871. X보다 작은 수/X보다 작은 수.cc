#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, X;
	cin >> N >> X;
	
	vector<int> A;
	for(int i=0; i<N; i++){
		int in;
		cin >> in;
		A.push_back(in);
	}

	for (int i:A) {
		if (i < X) cout << i << ' ';
	}
	
}