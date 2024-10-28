#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    if (N > 0 && (N & (N - 1)) == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
