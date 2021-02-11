#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
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
    int n,ans=0;
    cin >> n;
    int maxvalue=0,minvalue=1000,max_index=0,min_index=0;
    rep(i,0,n){
        int x;
        cin >> x;
        if(x>maxvalue){
            max_index = i;
            maxvalue = x;
        }
        if(x<=minvalue){
            min_index = i;
            minvalue = x;
        }
    }
    if(max_index > min_index){
        ans = (max_index-1) + (n-min_index) -1;
    }else{
        ans = (max_index -1) + (n-min_index);
    }
    cout << ans;
}

signed main(){
    int T=1;
    //cin >> T;
    while(T--){
        solve();
    }
}


