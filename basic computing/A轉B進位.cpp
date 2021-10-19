#include<iostream>
using namespace std;
int main() {
	int A, B, C;
	cin >> A >> B >> C;
	int a = A;
	int sum = (C % 10);
	while (C != 0) {
		C /= 10;
		sum += (C % 10) * a;
		a *= A;
	}
	int n[500],x=0;
	for (;sum>0; x++) {
		n[x] = sum % B;
		sum /= B;
	}
	for (; x > 0; x--)
		cout << n[x-1];
	
	return 0;
}