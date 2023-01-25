#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
    long long int t,n;
    cin>>t;
    while(t--){
 cin>>n;
 cout<<n<<endl;
 for(long long int i(0);i<n;i++){
  cout<<(i+1)<<" ";
 
}
cout<<endl;
 
}
    return 0;
}