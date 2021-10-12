#include<iostream>
using namespace std;
int main() {
	int a,c=1;
	cin >> a;
	if(a==1 && a % 2 == 0)cout << "no";
	else 
		for (int b = 3; b < (a + 1) / 2; b++) {
			if (a % b == 0) {
				c = 0;
				break;				
			}
		}
	if (c == 0) cout << "no";
	else cout << "yes";	
	return 0;
}