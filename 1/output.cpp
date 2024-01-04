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
    in.open("Test 1.txt");
    out.open("out 1.txt");
    int t = 1;
    in >> t;
    int sum_n = 0;
    while (t--)
    {
        int n;
        in >> n;
        out << (2*n-1)*2 << ' ' << (2*n)*3-6 <<'\n';
    }
    in.close();
    out.close();
}