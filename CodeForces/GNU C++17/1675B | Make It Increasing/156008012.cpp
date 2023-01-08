#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
 
int main()
{
 fast;
long long int n,m,v,t;
cin>>t;
while(t--){
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 vector<vector<long long int>>res(n);
 for(long long int i(0);i<n;i++){
  while(vect[i]!=0){
  res[i].push_back(vect[i]);vect[i]/=2;}
  res[i].push_back(0);}
 for(long long int i(0);i<n;i++){
  sort(res[i].begin(),res[i].end());}
 long long int val=res[n-1][res[n-1].size()-1];
 long long int som=0;
 bool test=true;
 for(long long int i(n-2);i>=0;i--){
  auto it =lower_bound(res[i].begin(),res[i].end(),val);
  long long int val1=it-res[i].begin()-1;
  if(val1==-1){test=false;break;}
  som+=res[i].size()-val1-1;
  val=res[i][val1];
  }
  if(test==false)cout<<-1<<endl;
  else
 cout<<som<<endl;}
 return 0; } 