/*          OM SARASWATI NAMASTUBHYAM VARDE KAMRUPINI VIDHYARAMBHAM 
                    KARISHYAMI SIDDHIRBHAVATU MEIN SADA
*/
#include<bits/stdc++.h>
#include <random>
using namespace std;
#define  fastt       ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  ll         long long

#define  md         1000000007
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/

int main()
{
    ofstream myfile;
    myfile.open("Test_3.txt");
    
    int t{1};
    myfile<< t<<"\n";
    while(t--){
        ll ub_t{10000},lb_t{199000},ub_a{100},lb_a{1};
        ll n{(rand()%(ub_t - lb_t +1))+lb_t};
        myfile<< n<<"\n";
        while(n--)myfile << ((rand()%(ub_a - lb_a +1))+lb_a) << " ";
        myfile<< "\n";
    }
    myfile.close();
    return 0;
}
