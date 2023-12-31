#include "bits/stdc++.h"
using namespace std;

#define ll long long

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#define pb push_back
#define sz(a) (int)a.size()

int32_t main()
{   
    ofstream out;
    ifstream in;
    in.open("Test 3.txt");
    out.open("out3.txt");
    int t = 1;
    in >> t;
    while (t--)
    {
        int n;
        in >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            in >> a[i];
        map<ll, ll> m;
        ll s = 0;
        m[0] = 1;
        bool flag=1;
        for (int i = 0; i < n; ++i)
        {
            a[i] *= ((i % 2) ? -1 : 1);
            s += a[i];
            if (m[s])
            {
                out << "YES\n";
                flag=0;
                break;
            }
            ++m[s];
        }

        if(flag==1) out << "NO\n";
    }
    in.close();
    out.close();
}