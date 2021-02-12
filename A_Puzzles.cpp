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
    int n, m;
    cin >> n >> m;
    int arr[m];
    rep(i,0,m){
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int least = arr[n-1] - arr[0];
    for (int i=1;i<=m-n;i++){
        if (arr[i+n-1] - arr[i] < least)
        {
            least = arr[i+n-1] - arr[i];
        }
    }
    cout << least << endl;
}

signed main(){
    codec;
    int T=1;
    //cin >> T;
    while(T--){
        solve();
    }
}

