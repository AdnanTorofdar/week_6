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
const ll N = 1e14;
vector<ll> cube;
void _The_eRRoR_()
{
    ll n;
    cin >> n;

    for (int i = 0, j = cube.size() - 1; i <= j;)
    {
        if (cube[i] + cube[j] == n)
        {
            yes;
            return;
        }
        (cube[i] + cube[j] < n) ? i++ : j--;
    }
    no;
}
int main()
{
    fast;
    for (ll i = 1; i * i * i < N; i++)
        cube.push_back(i * i * i);

    ll test_case = 1;
    cin >> test_case;
    while (test_case--)
        _The_eRRoR_();
    return 0;
}