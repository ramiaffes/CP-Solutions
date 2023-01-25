#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
map<long long int ,bool>vis;
long long int som=0;
int main()
{
fast;
long long int n,k,x;
cin>>n>>k;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++){
 cin>>vect[i];}
long long int val1=0;
while(1){
if(vect[0]>vect[1]){
 hashing[vect[0]]++;
 vis[vect[1]]=1;
 long long int val=vect[1];
 vect.erase(vect.begin()+1);
 vect.push_back(val);
 if((hashing[vect[0]]==k)or(vis[vect[1]]==1)){val1=vect[0];break;}
 }
else{
 hashing.clear();
 hashing[vect[1]]++;
 vis[vect[0]]=1;
 long long int val=vect[0];
 vect.erase(vect.begin());
 vect.push_back(val);
 if(hashing[vect[1]]==k){val1=vect[1];break;}
}}
cout<<val1<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}