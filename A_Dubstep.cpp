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
    string str;
    cin >> str;
    int i=0,flag=1;
    int len = str.length();
    while(i<len){
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            i +=3;
            if(flag==1){
                cout << " ";
            }
            flag=0;
        }else{
            flag=1;
            cout << str[i];
            i++;
        }
    }
}

signed main(){
    int T=1;
    //cin >> T;
    while(T--){
        solve();
    }
}

