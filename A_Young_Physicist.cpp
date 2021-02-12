#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back 
#define ll long long int 
typedef unsigned long long ull;
#define endl "\n"
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
    int n,arr[3],c1=0,c2=0,c3=0;
    cin >> n;
    rep(i,0,n){
        rep(j,0,3){
            cin >> arr[j];
        }
        c1 += arr[0];
        c2 += arr[1];
        c3 += arr[2];
    }
    if(c1==0 && c2==0 && c3==0){
        cout << "YES"<<endl;
    }else{
        cout << "NO" <<endl;
    }
}

signed main(){
    codec;
    int T=1;
    //cin >> T;
    while(T--){
        solve();
    }
}

