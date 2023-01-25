#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 long long int t;
 cin>>t;
 long long int x,y;
 long long int a,b;
 while(t--){
  cin>>x>>y;
  cin>>a>>b;
  cout<<min((x+y)*a,(max(x,y)-min(x,y))*a+min(x,y)*b)<<endl;
 }
  
   
 
 
               
 
 
 return 0;
}