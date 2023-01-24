#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast; 
 long long int n,t;
 cin>>t;
 while(t--){
 cin>>n;
 vector<long long int>vect(n);
 long long int som=0;
 for(long long int i(0);i<n;i++){cin>>vect[i];som+=vect[i];}
 
 vector<pair<long long int,long long int>>vect1(n);
for(long long int i(0);i<n;i++){
 vect1[i]=make_pair(vect[i],i);}
sort(vect1.begin(),vect1.end());sort(vect.begin(),vect.end());
 map<long long int,long long int>vis;
 vis[vect[n-1]]=1;
 for(long long int i(n-2);i>=0;i--){
  if(vis[vect[i+1]]==0)break;
  som-=vect[i+1];
  if(som>=vect[i+1]){vis[vect[i]]=1;}}
 
vector<long long int>res;
for(long long int i(0);i<n;i++){
 if(vis[vect1[i].first]==1){res.push_back(vect1[i].second+1);}}
sort(res.begin(),res.end());
cout<<res.size()<<endl;
for(auto v:res)cout<<v<<" ";
cout<<endl;
    
}
 
    
    
return 0;}