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
    int arrH[n],arrA[n];
    rep(i,0,n){
        cin >> arrH[i] >> arrA[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arrH[i] == arrA[j]){
                ans++;
            }
        }
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

