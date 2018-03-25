// Status	: Accepted (hardzal)
// Problems	: http://www.spoj.com/problems/CHITEST1

#include <iostream>
using namespace std;

int main() {
	int i, n, x[100], y[100], z[100];	
	// your code here
	cin >> n;
	for(i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
		z[i] = x[i] + y[i];
	}
	for(i = 0; i < n; i++) {
		cout << z[i] << "\n";
	}
	return 0;
}
