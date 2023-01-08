#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
 
int main()
{
 fast;
long long int n,k,t;
cin>>t;
while(t--){
cin>>n>>k;
vector<long long int>vect(n);
long long int ans=0;
for(long long int i(0);i<n;i++)cin>>vect[i];
vector<vector<long long int>>vect1(n);
for(long long int i(0);i<n;i++){
 long long int val=vect[i];
 while(val!=0){
  vect1[i].push_back(val%k);
  val/=k;}
 long long int val1=vect1[i].size();
 ans=max(ans,val1);
reverse(vect1[i].begin(),vect1[i].end());}
for(long long int i(0);i<n;i++){
 while(vect1[i].size()<ans){
  vect1[i].insert(vect1[i].begin()+0,1,0);}}
map<long long int,bool>vis;
bool test=true;
for(long long int i(0);i<n;i++){
 for(long long int j(0);j<vect1[i].size();j++){
  if(vect1[i][j]>1){test=false;break;}
  if((vis[j]==1)and(vect1[i][j]!=0)){test=false;break;}
  if(vect1[i][j]!=0)vis[j]=1;}
  if(test==false)break;}
if(test==false){
 cout<<"NO"<<endl;}
else{
 cout<<"YES"<<endl;}
}
 
   return 0;}