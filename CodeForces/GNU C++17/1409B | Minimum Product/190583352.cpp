#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool sortbysecasc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second<b.second;
}
int main() {
 fast;
    long long int t,n,a,b,x,y;
  
    cin>>t;
    while(t--){  
  cin>>a>>b>>x>>y>>n;
   if(((a-n)>=x) and ((b-n)>=y)){
    cout<<min((a-n)*b,(b-n)*a)<<endl;}
   else if(((a-n)>=x) and((b-n)<y)){
    cout<<(min(((a-n)*b),y*max((a-(n-(b-y))),x)))<<endl;}
   else if(((b-n)>=y) and((a-n)<x)){
    cout<<(min(((b-n)*a),x*max(b-(n-(a-x)),y)))<<endl;}
   else{
    cout<<(min(x*max(b-(n-(a-x)),y),y*max((a-(n-(b-y))),x)))<<endl;}
 
  
   
   
 }
 
 
   
   
  
  
   
    
    
 
    
   
    
    
    return 0;
}