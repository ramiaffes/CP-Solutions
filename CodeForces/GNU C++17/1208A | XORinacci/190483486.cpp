#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long  int  n,k,t,a,b;
 
 
 cin>>t;
 while(t--){
 cin>>a>>b>>n;
 if(n%3==0)cout<<a<<endl;
 else if (n%3==1)cout<<b<<endl;
 else cout<<(a^b)<<endl;
 
 
}
 
 
 
 
 
 
 
return 0;}