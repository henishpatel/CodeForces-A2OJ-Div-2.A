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
    int n,m,a,b;
	cin>>n>>m>>a>>b;
	int answer=0;
    if(m*a<=b){
        
    answer=n*a;
        
    }	
    
    else
    {
        answer=(n/m)*b+min((n%m)*a,b);
        
    }
        
        cout<<answer;
}

signed main(){
    codec;
    int T=1;
    //cin >> T;
    while(T--){
        solve();
    }
}

