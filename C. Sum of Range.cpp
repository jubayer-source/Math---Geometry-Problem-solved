#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;

    // Ensure A is the smaller and B is the larger
    if (A > B) swap(A, B);

    long long sum_all = 0, sum_even = 0, sum_odd = 0;

    for(long long i = A; i <=B; ++i){
        sum_all += i;
        if( i % 2 == 0){
            sum_even += i;
        }
        else
            sum_odd += i;
    }

    cout << sum_all <<endl;
    cout << sum_even <<endl;
    cout << sum_odd <<endl;



    return 0;
}
