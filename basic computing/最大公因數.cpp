#include<iostream>
using namespace std;
int main() {
	int a, b,c;
	cin >> a >> b;
	if (b > a) {
		c = b;
		b = a;
		a = c;
	}
	for (int x = b; x > 0; x--) {
		if (a % x == 0 && b % x == 0) {
			cout << x;
			break;
		}
	}

	return 0;
}