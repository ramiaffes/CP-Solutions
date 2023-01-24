#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int n,m,k,x,y;
 ifstream I("input.txt");
  ofstream O("output.txt");
 I>>n>>m;
 I>>k;
 vector<pair<long long int,long long int>>vect(k);
 for(long long int d(0);d<k;d++){
  I>>x>>y;
  vect[d]=make_pair(x,y);
 }
 long long int ans1=0;
 long long int ans=1e9;
 pair<long long int,long long int>val;
 for(long long int i(1);i<=n;i++){
  for(long long int j(1);j<=m;j++){
   ans=1e9;
   for(long long int d(0);d<k;d++){
    ans=min(ans,abs(vect[d].first-i)+abs(vect[d].second-j));}
   if(ans1<=ans){
    ans1=ans;val=make_pair(i,j);}}}
 
 O<<val.first<<" "<<val.second<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}