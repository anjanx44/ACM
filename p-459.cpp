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
#include<time.h>
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
#define ms(a,n) memset(a, n, sizeof(a))
#define ms0(a) ms(a,0)
#define all(a) a.begin(), a.end()
#define Abs(x) (((x)<0)?-(x):(x))

#define pi 2*acos(0.0)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

#define dbg(x) cout<<#x<<'='<<x<<endl;
#define dbgarr(i,a) cout<<#a<<"["<<i<<"] = "<<a[i]<<" "<<endl;
#define mx7 10000007
#define mx6 1000006
#define mx5 100005
#define IOS ios_base::sync_with_stdio(0);
//typedef
typedef long long ll;
typedef pair<int,int> pii;
// Number theory
ll big_mod(ll b,ll p,ll m) {ll res=1;while(p){if(p & 1){res=((res%m)*(b%m))%m;}b=((b%m)*(b%m))%m;p>>=1;}return res;}
ll Pow(ll b,ll p) {ll res=1;while(p){if(p & 1){res=res*b;}b=b*b;p>>=1;}return res;}
ll modinv(ll n,ll m){return big_mod(n,m-2,m);}

////CODE HERE

bool vis[30];
vector<int> adj[30];

void dfs(int u){
    vis[u]=1;
    int v,l=adj[u].size();

    for(int i=0;i<l;i++){
        v=adj[u][i];
        if(vis[v]==0){
                vis[v]=1;
            dfs(v);
        }
    }
}


int main(){
    int t;
    cin>>t;
    scanf("\n");
    while(t--){
        char c[5];
        gets(c);

        int n=c[0]-65;

        ms0(vis);
        for(int i=0;i<30;i++){
            adj[i].clear();
        }

        while(gets(c) && c[0]){
            adj[c[0]-'A'].pb(c[1]-'A');
            adj[c[1]-'A'].pb(c[0]-'A');

        }


        int cnt=0;
        for(int i=0;i<=n;i++){
            if(vis[i]==0){
                dfs(i);
                cnt++;
            }
        }

        cout<<cnt<<endl;
        if(t) cout<<endl;

    }
    return 0;
}































