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
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 vector<string>vect1(n+1);
 vect1[0]="abcdefghijklmnopqrstuvwyxzabcdefghijklmnopqrstuvwy";
 for(long long int j(1);j<=n;j++){
  vect1[j]=vect1[j-1];
  for(long long int m(vect[j-1]);m<=50;m++){
   if(vect1[j][m]!='z'){
   vect1[j][m]=(vect1[j][m]+1);}else 
   vect1[j][m]='a';} }
 for(auto v:vect1)cout<<v<<endl;
 
}
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}