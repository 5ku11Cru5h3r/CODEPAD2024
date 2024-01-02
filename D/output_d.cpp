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
    in.open("Test.txt");
    out.open("out.txt");
    int t = 1;
    in >> t;
    while (t--)
    {
        int n;
	in >> n;
	string s;
	in >> s;
	string res = "";
	while (!s.empty()) {
		int x;
		if (s.back() == 'e' || s.back() == 'i') {x = 2;}
		else {x = 3;}
		
		while (x--) {
			res += s.back();
			s.pop_back();
		}
		res += '.';
	}
	res.pop_back();
	reverse(res.begin(), res.end());
	out << res << '\n';
    }
    in.close();
    out.close();
}