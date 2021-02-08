#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back 
#define ll long long int 
typedef unsigned long long ull;
#define mod 1000000007
#define xx first
#define yy second
#define codec ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);;
typedef vector<int> vi;
#define deb(x) cout<<#x<<" "<<x<<endl;
#define all(t) (t).begin(),(t).end()
typedef pair<int, int> pi;
#define pie 3.1415926535
#define output(x) cout << ( x ? "YES" : "NO" ) << '\n' ;
void solve(){
    string str,ans;
    ll c1=0,c2=0,c3=0;
    cin >> str;
    ans=str;
    ll n = str.length();
    rep(i,0,n){
        if(int(str[i])==49){
            c1++;
        }else if(int(str[i])==50){
            c2++;
        }else if(int(str[i])==51){
            c3++;
        }
    }
    for(ll i=0;i<n;i=i+2){
        if(c1!=0){
            ans[i] = '1';
            ans[i+1] = '+';
            c1--;
        }else if(c2!=0){
            ans[i] = '2';
            ans[i+1] = '+';
            c2--;
        }else if(c3!=0){
            ans[i] = '3';
            ans[i+1] = '+';
            c3--;
        }
    }
    rep(i,0,n){
        cout << ans[i];
    }
    cout << endl;
}

signed main(){
    int T=1;
    //cin >> T;
    while(T--){
        solve();
    }
}

