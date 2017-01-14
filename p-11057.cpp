//#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <string>
#include <sstream>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <memory.h>
#include <functional>
#include <numeric>

using namespace std;


//For Define
#define forab(i,a,b) for(__typeof(b) i=(a);i<=(b);i++)
#define for0(i,n) forab(i,0,(n)-1)
#define for1(i,n) forab(i,1,n)
#define forstl(i,s) for(__typeof((s).end()) i=(s).begin(); i != (s).end(); i++)

#define ff first
#define se second
#define mp make_pair
#define pb push_back
#define sz(a) ((int)a.size())
#define ms(a,n) memset(a, n, sizeof(a))
#define ms0(a) ms(a,0)
#define all(a) a.begin(), a.end()
#define amax(a,b) ( (a) = max( (a) , (b) ) )
#define amin(a,b) ( (a) = min( (a) , (b) ) )
#define Abs(x) (((x)<0)?-(x):(x))


#define pi 2*acos(0.0)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

//input
#define sfi(t) scanf("%d",&t)
#define sfii(a,b) scanf("%d %d",&a,&b)
#define sfiii(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define sfll(t) scanf("%lld",&t)
#define sfllll(a,b) scanf("%lld %lld",&a,&b)
#define sfllllll(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define sfs(s) scanf("%s",s)


//Output
#define pfi(a) printf("%d\n",a)
#define pfii(a,b) printf("%d %d\n",a,b)
#define pfiii(a,b,c) printf("%d %d %d\n",a,b,c)
#define pfll(a) printf("%lld\n",a)
#define pfllll(a,b) printf("%lld %lld\n",a,b)
#define pfllllll(a,b,c) printf("%lld %lld %lld\n",a,b,c)
#define pfd(a) printf("%lf\n",a)
#define pfs(a) printf("%s\n",a)
#define pfis(a) printf("%d ",a)
#define pflls(a) printf("%lld ",a)
#define pfds(a) printf("%lf ",a)

#define dbg(x) cout<<#x<<'='<<x<<endl;
#define dbgarr(i,a) cout<<#a<<"["<<i<<"] = "<<a[i]<<" "<<endl;
#define maxll 9223372036854775807
#define minll -9223372036854775808
#define maxi 2147483647
#define mini -2147483648
#define mx7 10000007
#define mx6 1000006
#define mx5 100005
typedef long long ll;
#define IOS ios_base::sync_with_stdio(0);
// Number theory
ll big_mod(ll b,ll p,ll m) {ll res=1;while(p){if(p & 1){res=((res%m)*(b%m))%m;}b=((b%m)*(b%m))%m;p>>=1;}return res;}
ll Pow(ll b,ll p) {ll res=1;while(p){if(p & 1){res=res*b;}b=b*b;p>>=1;}return res;}
ll modinv(ll n,ll m){return big_mod(n,m-2,m);}
//double beg=clock();
//double end=clock();
//    fprintf(stderr,"*** Total time = %.3lf ***\n",(end-beg)/CLOCKS_PER_SEC);
////CODE HERE



int main(){
    int n;
    while(sfi(n)==1){
        int a[mx5];
        for(int i=0;i<n;i++){
            sfi(a[i]);
        }
        int m;
        sfi(m);

        int dif,mndif=maxi,vl,vl1;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]==m){
                    dif=Abs(a[j]-a[i]);

                    if(dif<mndif){
                        vl=a[i];
                        vl1=a[j];
                        mndif=dif;
                    }
                }
            }
        }

        if(vl>vl1) swap(vl,vl1);

        printf("Peter should buy books whose prices are %d and %d.\n\n",vl,vl1);
    }
    return 0;
}

















