//-----------_The_eRRoR_----------
//---------Adnan_Torofdar----------
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
void _The_eRRoR_()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    auto ok = [&](long long mid)
    {
        long long cnt = 0;
        for (int i = (n / 2); i < n; i++)
        {
            cnt += (a[i] < mid ? (mid - a[i]) : 0);
        }
        return cnt <= k;
    };

    long long l = 1, r = 2e9, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << '\n';
}
int main()
{
    fast;
    ll test_case = 1;
    // cin >> test_case;
    while (test_case--)
        _The_eRRoR_();
    return 0;
}