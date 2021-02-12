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
    int n,p,q,count=0;
    cin >> n;
    int arr[250];
    cin >> p;
    rep(i,0,p){
        cin >> arr[i];
    }
    cin >> q;
    rep(i,p,p+q){
        cin >> arr[i];
    }
    sort(arr,arr+(p+q));
    rep(i,0,p+q){
        if(arr[i] != arr[i+1]){
            count++;
        }
    }
    if(count == n){
        cout << "I become the guy."<<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
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

