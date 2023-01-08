#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
int main(){
 fast;
 long long int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  string str=to_string(n);
  string str1;
  long long int ans=str.length()+1;
  long long int val=1;
  vector<long long int>res;
  while(str1.length()<=(2*str.length()+1)){
   res.push_back(val);
   val*=2;
   if(val<0)break;
   str1=to_string(val);
   }
  for(auto v:res){
   string str2=to_string(v);
   long long int val=0;
   long long int som=0;
   long long int v2=0;
   for(long long int i(0);i<str.length();i++){
    if(str[i]!=str2[val]){
     som++;}
    else{
     val++;}
    if(val==str2.length()){v2=i;break;}
    }
    if(val==str2.length()){
     som+=str.length()-v2-1;}
    else{
     som+=str2.length()-val;}
    ans=min(ans,som);}
   cout<<ans<<endl;
  
  
  
  }
 return 0;}