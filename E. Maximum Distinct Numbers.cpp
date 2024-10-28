#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long left = 1, right = N, answer = 0;

    while (left <= right) {
        long long mid = left + (right - left) / 2;

        // Check if mid * (mid + 1) <= 2 * N without overflow
        if (mid <= (2 * N) / (mid + 1)) {
            answer = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << answer << endl;

    return 0;
}
