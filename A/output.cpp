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
    int sum_n = 0;
    while (t--)
    {
        int n;
        in >> n;
        sum_n += n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            in >> arr[i];
        }
        int cnt_zrs = count(arr.begin(), arr.end(), 0);
        if (cnt_zrs == 0 || cnt_zrs == n)
        {
            out << "0\n";
            continue;
        }
        if ((cnt_zrs) < (n) / 2)
        {
            out << "-1\n";
            continue;
        }
        int cnt = 0;
        for (int i = 0; i + 1 < n; i++)
        {
            if (!arr[i])
                continue;
            if ((arr[i] == arr[i + 1]) && arr[i])
            {
                i++;
                cnt++;
            }
        }
        out << cnt << '\n';
    }
    in.close();
    out.close();
}