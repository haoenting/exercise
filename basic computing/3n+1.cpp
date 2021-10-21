#include <iostream>
using namespace std;
void main() {
    int num;
    cin >> num;
    for (;num != 1;) {
        cout << num <<",";
        if (num % 2 == 0)
            num = num / 2;
        else num = num * 3 + 1;
    }
    cout << 1;
}
