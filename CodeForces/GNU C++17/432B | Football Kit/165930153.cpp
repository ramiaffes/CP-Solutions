#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
map<long long int,bool>vis;
map<long long int,bool>res1;
map<long long int,bool>res2;vector<long long int>vect(N);
 
int main()
{
 fast; 
 long long int n,x,y;
 map<long long int,long long int>hashing2;
 cin>>n;
 vector<pair<long long int,long long int>>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i].first>>vect[i].second;
  hashing2[vect[i].first]++;
  }
 long long int val=0;
 long long int val2=0;
 for(long long int i(0);i<n;i++){
  val=(n-1);
  val+=hashing2[vect[i].second];
  val-(vect[i].second==vect[i].first);
  val2=(n-1)-(hashing2[vect[i].second]-(vect[i].second==vect[i].first));
  cout<<val<<" "<<val2<<endl;
  }
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}