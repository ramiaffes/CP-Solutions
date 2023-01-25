#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool sortbysecasc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second<b.second;
}  
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
    long long int t,a,b,c,d;
    cin>>t;
    while(t--){
  cin>>a>>b>>c>>d;
  if ((a>d) and(c>b)){
  cout<<max(a+b,c+d)<<endl;}
  else if((a==d) and(c>b)){
   cout<<(c+d)<<endl;}
  else if((c==b) and(a>d)){
   cout<<(a+b)<<endl;}
  else{
   cout<<(a+c)<<endl;}
 
  
  
}
    
    
    return 0;
}