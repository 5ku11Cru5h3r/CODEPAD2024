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
    in.open("Test2.txt");
    out.open("out2.txt");
    int t = 1;
    in >> t;
    int sum_n = 0;
    while (t--)
    {
        int n, m;
        in >> n >> m;
        vector<int> rmx(n, INT_MIN), cmx(m, INT_MIN), rmn(n, INT_MAX), cmn(m, INT_MAX);
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++){
                int x;
                in >> x;
                rmx[i] = max(rmx[i], x);
                cmx[j] = max(cmx[j], x);
                rmn[i] = min(rmn[i], x);
                cmn[j] = min(cmn[j], x);
            }
        int mx = *max_element(rmx.begin(), rmx.end()), mn = *min_element(rmn.begin(), rmn.end());
        int r = 0, c = 0;
        for(int i = 0; i < n; i++)
            r += rmn[i] != mn && rmx[i] != mx;
        for(int i = 0; i < m; i++)
            c += cmn[i] != mn && cmx[i] != mx;
        out << c * r << '\n';
    }
    in.close();
    out.close();
}