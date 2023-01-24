#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int n,t,k;
 string s;
 cin>>s;
 cin>>k;
 for(long long int i(0);i<k;i++){
  s.append("1");}
 long long int d=s.length();
 long long int ans=0;
 for(long long int d1(2);d1<=d;d1+=2){
  for(long long int i(0);i<=(d-d1);i++){
   string s1=s.substr(i,d1);
   bool test=true;
   for(long long int j(0);j<(s1.length()/2);j++){
    if((s1[j]==s1[j+d1/2])or(s1[j+d1/2]=='1')){
     continue;}
    else{test=false;break;}}
   if(test==true){
    ans=max(ans,d1);}}
  
  }
 cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}