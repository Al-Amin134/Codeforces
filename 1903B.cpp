

/*
 بسم الله الرحمن الرحيم

 ♥♥♥♥♥  ♥♥           ♥♥♥♥♥  ♥♥♥    ♥♥♥ ♥♥ ♥♥♥    ♥♥
♥♥   ♥♥ ♥♥          ♥♥   ♥♥ ♥♥♥♥  ♥♥♥♥ ♥♥ ♥♥♥♥   ♥♥
♥♥♥♥♥♥♥ ♥♥   ♥♥♥♥   ♥♥♥♥♥♥♥ ♥♥ ♥♥♥♥ ♥♥ ♥♥ ♥♥ ♥♥  ♥♥
♥♥   ♥♥ ♥♥          ♥♥   ♥♥ ♥♥  ♥♥  ♥♥ ♥♥ ♥♥  ♥♥ ♥♥
♥♥   ♥♥ ♥♥♥♥♥♥♥     ♥♥   ♥♥ ♥♥      ♥♥ ♥♥ ♥♥   ♥♥♥♥
*/
#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first
#define ss second
#define debug(x) cout<<#x<<" "<<x<<nl;
const ll sz=2e5+7,Inf=1e9+7;

void solve(){

    int n;
    cin>>n;
    int a[n][n];
    int flag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        int m=1073741823;
        for(int j=0;j<n;j++){
            if(i==j)continue;
            m&=a[i][j];
        }

        v.push_back(m);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j&&a[i][j]!=(v[i]|v[j])){
                cout<<"no"<<endl;
                return;
            }
        }
    }
    cout<<"yes"<<endl;
   for(int i:v){
    cout<<i<<" ";
   }
   cout<<endl;


}
int main() {
  fast;
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  TC
  solve();
  return 0;
}
