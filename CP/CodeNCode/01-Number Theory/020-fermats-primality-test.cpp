//  SPOJ - PON

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define noTLE ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define testcase_chalao_bhai \
    int virus_arzk;          \
    cin >> virus_arzk;       \
    while (virus_arzk--)

int mulmod(int a, int b, int c)
{
    int x = 0, y = a % c;
    while (b > 0)
    {
        if (b % 2)
            x = (x + y) % c;
        y = (y * 2LL) % c;
        b /= 2;
    }
    return x % c;
}

int binPower(int a, int n, int mod)
{
    int res = 1;
    while (n)
    {
        if (n & 1)
            res = mulmod(res, a, mod);
        n >>= 1;
        a = mulmod(a, a, mod);
    }
    return res % mod;
}

bool is_Prime(int n, int iterations = 5)
{
    if (n < 5)
        return n == 2 || n == 3;
    for (int i = 1; i <= iterations; i++)
    {
        int a = 2 + rand() % (n - 3);
        int res = binPower(a, n - 1, n);
        if (res != 1)
            return false;
    }
    return true;
}

signed main()
{
    noTLE;
    testcase_chalao_bhai
    {
        int n;
        cin >> n;
        if (is_Prime(n))
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }
    return 0;
}