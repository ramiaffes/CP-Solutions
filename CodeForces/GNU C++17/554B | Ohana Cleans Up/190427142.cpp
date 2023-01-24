#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int n,t;
 cin>>n;
 vector<string>vect(n);
for(long long int i(0);i<n;i++){
 cin>>vect[i];}
long long int ans=0;
for(long long int j(0);j<n;j++){
 vector<string>vect1(vect.begin(),vect.end());
 for(long long int i(0);i<n;i++){
  if(vect1[j][i]=='1'){
   for(long long int d(0);d<n;d++){
    vect1[d][i]=(1-(vect1[d][i]-'0'))+'0';}
   }}
 long long int som=0;
 for(long long int m(0);m<n;m++){
  bool test=true;
   for(long long int m1(0);m1<n;m1++){
    if(vect1[m][m1]=='1'){test=false;break;}
    }
   if(test==true)som++;}
 ans=max(ans,som);
 
 }
cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}