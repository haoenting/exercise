#include<iostream>
using namespace std;
int main() {
	int tree,per,total=0;
	int T1[20000],T2[20000];
	cin >> tree;
	T2[0] = 0;
	for (int x = 1; x <= tree; x++) {
		cin >> T1[x];
		T2[x] = T2[x-1] + T1[x]; 
	}
	cin >> per;
	int str, end;
	for (int y = 1; y <= per; y++) {
		cin >> str >> end;
		int sum = T2[end] - T2[str-1];
		cout << sum <<endl;
	}
	system("pause");
	return 0;
}
