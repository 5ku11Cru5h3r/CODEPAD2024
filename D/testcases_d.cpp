/*          OM SARASWATI NAMASTUBHYAM VARDE KAMRUPINI VIDHYARAMBHAM 
                    KARISHYAMI SIDDHIRBHAVATU MEIN SADA
*/
#include<bits/stdc++.h>
#include <random>
using namespace std;
#define  fastt       ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  ll         long long

#define  pb         push_back
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/

int main()
{
    ofstream Test;
    Test.open("Test.txt");
    
    int t{20};
    Test<< t<<"\n";
    while(t--){
        string s;
        ll ub{6667},lb{1};
        ll x=(rand()%(ub-lb+1))+lb;
        while (x--)
        {
            char c[3]={'f','g','h'};
            char v[2]={'e','i'};
            bool g{rand()%2};
            if(g==1){
                s.pb(c[rand()%3]);
                s.pb(v[rand()%2]);
                s.pb(c[rand()%3]);
            }
            else{
                s.pb(c[rand()%3]);
                s.pb(v[rand()%2]);
            }
        }

        Test<<s.size()<<"\n"<<s<<"\n";
    }
    Test.close();
    return 0;
}
