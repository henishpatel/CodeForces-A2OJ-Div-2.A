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
    string str;
    cin >> str;
    int length = str.length();
    rep(i,0,length){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' ||str[i] == 'o' || str[i] == 'O' ||str[i] == 'u' || str[i] == 'U' || str[i] == 'y' || str[i] == 'Y'){

        }else{
            cout << "." << (char)(tolower(str[i]));
        }
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

