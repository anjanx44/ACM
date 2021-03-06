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
#define forstl(i,s) for(__typeof((s).end()) i=(s).begin(); i != (s).end(); i++)

#define ff first
#define se second
#define mkp make_pair
#define pb push_back
#define sz(a) ((int)a.size())
#define ms(a,n) memset(a, n, sizeof(a))
#define ms0(a) ms(a,0)
#define all(a) a.begin(), a.end()
#define Abs(x) (((x)<0)?-(x):(x))

#define pi 2*acos(0.0)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

#define dbg(x) cout<<#x<<'='<<x<<endl;
#define dbgarr(i,a) cout<<#a<<"["<<i<<"] = "<<a[i]<<" "<<endl;
#define IOS ios_base::sync_with_stdio(0);
//typedef
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<pair<int,int>,int > piii;
// Number theory
ll big_mod(ll b,ll p,ll m) {ll res=1;while(p){if(p & 1){res=((res%m)*(b%m))%m;}b=((b%m)*(b%m))%m;p>>=1;}return res;}
ll Pow(ll b,ll p) {ll res=1;while(p){if(p & 1){res=res*b;}b=b*b;p>>=1;}return res;}
ll modinv(ll n,ll m){return big_mod(n,m-2,m);}

////MAIN CODE HERE

int n,cnt,res;
char g[210][210];
bool vis[210][210];
int dx[]={-1,-1,0,0,1,1};
int dy[]={-1,0,-1,1,0,1};

bool ans;

bool dfs(int x,int y){
    vis[x][y]=1;
    if(x==n-1) return 1;

    for(int i=0;i<6;i++){
        int vx=x+dx[i];
        int vy=y+dy[i];

        if(vx>=0 && vx<n && vy>=0 && vy<n && vis[vx][vy]==0 && g[vx][vy]=='b'){
            ans|=dfs(vx,vy);
        }
    }
    return ans;
}


int main(){
    int cno=0;
    while(scanf("%d",&n)==1 && n){
        for(int i=0;i<n;i++){
            scanf("%s",g[i]);
        }

        ms0(vis);
        ans=0;
        for(int j=0;j<n;j++){
            if(g[0][j]=='b' && vis[0][j]==0){
                dfs(0,j);
            }
        }
        if(ans)
            printf("%d B\n",++cno);
        else
            printf("%d W\n",++cno);
    }
    return 0;
}


































