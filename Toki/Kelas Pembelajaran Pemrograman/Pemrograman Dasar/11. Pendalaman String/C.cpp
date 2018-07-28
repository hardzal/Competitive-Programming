#include<iostream>
using namespace std;
static const string abjad = "abcdefghijklmnopqrstuvwxyz";

int main() {
	string s;
	int x, i, j;
	getline(cin, s);
	cin >> x;
	if(s.length() <= 100) {
		for(i = 0; i < s.length(); i++) {
			if(s[i] >= 'a' && s[i] <= 'z') {
				for(j = 0; j < abjad.length(); j++) {
					if(s[i] == abjad[j]) {
						s[i] = abjad[(j + x) % 26];
 						break;
					}
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}
