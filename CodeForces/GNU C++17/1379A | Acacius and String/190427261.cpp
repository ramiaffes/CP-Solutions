#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int n,t,k;
 cin>>t;
 while(t--){
 cin>>n;
 bool test2=false;
 string s2;
 string s1="abacaba" ;
 cin>>s2;
 string res=" ";
 for(long long int i(0);i<=(n-7);i++){
  long long int som=0;
  string s=s2;
  string str=s.substr(i,7);
  bool test=true;
  for(long long int d(0);d<str.length();d++){
   if(isalpha(str[d])and(str[d]!=s1[d])){
    test=false;break;}}
  if(test==false) continue;
   for(long long int j(i);j<=(i+6);j++){
    s[j]=s1[j-i];}
   for(long long int m(0);m<n;m++){
    if(s[m]=='?')s[m]='z';}
  for(long long int m(0);m<=(n-7);m++){
   string str2=s.substr(m,7);
   if(str2==s1)som++;
   if(som>=2)break;
   
   }
   if(som==1){res=s;test2=true;break;}
  }
  if(test2==true){cout<<"YES"<<endl;cout<<res<<endl;}
  else cout<<"NO"<<endl;}
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}