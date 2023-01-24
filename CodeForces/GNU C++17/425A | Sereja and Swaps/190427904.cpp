#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
int main()
{
 fast; 
 long long int n,k;
 cin>>n>>k;
 vector<long long int>vect(n);
vector<long long int>res2;
 map<long long int,long long int>hashing;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  hashing[vect[i]]++;
  }
 for(auto v:hashing){
  res2.push_back(v.first);
  }
 long long int ans=-1e9;
 long long int som1=0;
 for(long long int i(0);i<n;i++){
  vector<long long int>res;
  som1=0;
   map<long long int ,long long int >hashing2=hashing;
   
   for(long long int j(i);j<n;j++){map<long long int,bool>vis;
    res.push_back(vect[j]);
    hashing2[vect[j]]--;
    som1+=vect[j];
    long long int som3=som1;
    long long int val=min(k,(j-i+1));
    sort(res.begin(),res.end());
    long long int som=0;
    long long int m=res2.size()-1;
    if(res[0]!=res2[m]){
    while((m>=0)and(som<val)){
     som+=hashing2[res2[m]];
     vis[res2[m]]=1;
     som3+=hashing2[res2[m]]*res2[m];
     m--;}
   if(som>val){
    som3-=(som-val)*res2[m+1];}
   for(long long int d1(0);d1<min(som,val);d1++){
    if(vis[res[d1]]==0){
    som3-=res[d1];
    }}}
   ans=max(ans,som3);
    
    }}
   cout<<ans<<endl;
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}