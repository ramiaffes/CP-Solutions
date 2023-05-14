#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
int main()
{
 fast; 
  int n,k;
    cin>>n>>k;
    vector<long long int>vect(n);
    for( int i(0);i<n;i++)cin>>vect[i];
      bool prime[100001];
    memset(prime, true, sizeof(prime));
 prime[1]=false;
    for (int p = 2; p * p <= 100000; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= 100000; i += p)
                prime[i] = false;
        }
    }
vector<set< int>>prime2(n);
for( int i=0;i<n;i++){
    for( int j=1;j*j<=vect[i];j++){
        if((vect[i]%j==0)){
            if(prime[j]==true){
                prime2[i].insert(j);
            }
            if(prime[vect[i]/j]==true){
                prime2[i].insert(vect[i]/j);
            }
            }
            
        }
    }
vector<vector<pair< int, long long int>>>res(n);
map<vector<pair<int, long long int>>,long long int>vis;
long long int resf=0;long long int res2=0;
for(int i=0;i<n;i++){
    int val=vect[i];
    for(auto v:prime2[i]){
        long long int som=0;
        while(val%v==0){
            som++;
            val/=v;
        }
    if(som%k!=0)
    res[i].push_back(make_pair(v,som%k));
   
    } if(not(res[i].empty()))vis[res[i]]+=1;
    else res2++;
 
}
 
for(int i=0;i<n;i++){
    if(res[i].empty())continue;
    vector<pair<int,long long int>>v1;
    for(int j=0;j<res[i].size();j++){
        if((k-res[i][j].second)%k!=0)
        v1.push_back(make_pair(res[i][j].first,(k-res[i][j].second)%k));
    }
if(v1!=res[i])
resf+=vis[v1];
else resf+=vis[v1]-1;
}
 
cout<<(resf/2+(res2*(res2-1))/2)<<endl;
 
 
 
 
 
 
    
 
    
    
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}