/*          OM SARASWATI NAMASTUBHYAM VARDE KAMRUPINI VIDHYARAMBHAM
                    KARISHYAMI SIDDHIRBHAVATU MEIN SADA
*/
#include <bits/stdc++.h>
#include <random>
using namespace std;
#define fastt                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long

#define md 1000000007
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/

int main()
{
    ofstream myfile;
    myfile.open("Test2.txt");
    int t{1};
    myfile << t << "\n";
    while (t--)
    {
        ll ub_t{3}, lb_t{1}, ub_a{100000}, lb_a{1};
        ll n{1000}, m{100};
        myfile << n << ' ' << m << "\n";
        while (n--)
        {
            for(int d=0;d<m;d++)
            {
                myfile << ((rand() % (ub_a - lb_a + 1)) + lb_a) << " ";
            }
            myfile << "\n";
        }
    }
    myfile.close();
    return 0;
}
