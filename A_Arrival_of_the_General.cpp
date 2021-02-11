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
    int n;
    cin >> n;
    vi arr(n);
    rep(i,0,n){
        cin >> arr[i];
    }
    map<int,int> m;
    rep(i,0,n)
    {
        m[arr[i]]=i;
    }
    sort(all(arr));
    int min = arr[0];
    int max = arr[n-1];
    int min_index = m[min];
    int max_index = m[max];
    int ans=0;
    n--;
    if(max_index > min_index){
        min_index++;
    }
    ans = (max_index + n - min_index);
    cout << ans;
}

signed main(){
    int T=1;
    //cin >> T;
    while(T--){
        solve();
    }
}

