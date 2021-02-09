#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back 
#define int long long int 
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
    string s;
    int flag=0;
    cin >> s;
    rep(i,0,s.length()){
        
        if(s[i] == 'h' && flag==0){
            flag++;
        }else if(s[i] == 'e' && flag==1){
            flag++;
        }else if(s[i] == 'l' && flag==2){
            flag++;
        }else if(s[i] == 'l' && flag==3){
            flag++;
        }else if(s[i] == 'o' && flag==4){
            flag++;
        }
    }
    if(flag==5){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

signed main(){
    int T=1;
    //cin >> T;
    while(T--){
        solve();
    }
}

