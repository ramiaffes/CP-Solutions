#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<long long int ,vector<long long int>>adj;
long long int power(long long int d,long long int a){
 long long int p=1;
 for(long long int i(0);i<a;i++){
  p*=d;}
 return p;}
int main()
{
 fast;
 long  long int a,b,c,d;
 cin>>a>>b>>c;
 vector<long long int>res;
 for(long long int i(1);i<=9*9;i++){
  if(((b*power(i,a)+c)>0)and((b*power(i,a)+c)<1e9)){
  string val=to_string(b*power(i,a)+c);
  long long int som=0;
  for(long long int d(0);d<val.length();d++){
   som+=(val[d]-'0');}
  if(som==i){res.push_back(stoll(val));}
  }}
 cout<<res.size()<<endl;
 for(auto v:res)cout<<v<<" ";
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}