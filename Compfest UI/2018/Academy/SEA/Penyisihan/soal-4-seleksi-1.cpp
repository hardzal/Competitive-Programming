#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int i, j, t, a, b, k;
	cin >> t;
	vector<int>r(t);
	for(i = 0; i < t; i++) {
		cin >> a >> b >> k;
		r[i] = 0;
		for(j = a; j <= b; j++) {
			if(j % k == 0) r[i]++;
		}
	}
	for(i = 0; i < t; i++) {
		cout << "Case " << i+1 << ": " << r[i] << endl;
	}
}
