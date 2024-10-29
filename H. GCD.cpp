#include <bits/stdc++.h>
#include <iostream>
#include <algorithm> // for __gcd
using namespace std;

int main() {
    long long A, B;

    // Input the two numbers
    cin >> A >> B;

    // Calculate GCD using the built-in __gcd function
    long long gcd = __gcd(A, B);

    // Calculate LCM using the formula: LCM(A, B) = (A * B) / GCD(A, B)
    long long lcm = (A / gcd) * B; // to avoid overflow

    // Output the GCD and LCM
    cout << gcd << " " << lcm << endl;

    return 0;
}
