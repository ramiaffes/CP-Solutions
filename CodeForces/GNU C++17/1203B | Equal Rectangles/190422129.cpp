#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int k,n,q;
 cin>>q;
 while(q--){
 cin>>n;
 vector<long long int>vect(4*n);
 bool test=true;
 map<long long int,long long int>hashing;
 set<long long int>se;
 for(long long int i(0);i<4*n;i++){cin>>vect[i];hashing[vect[i]]++;se.insert(vect[i]);}
 vector<long long int>vect2(se.begin(),se.end());
 for(long long int i(1);i<vect2.size();i++){
  long long int val=vect2[0]*vect2[i];
  test=true;
  for(long long int d(0);d<(vect2.size());d++){
   if(val%vect2[d]!=0){test=false;break;}
   if((hashing[val/vect2[d]]!=hashing[vect2[d]])or(hashing[val/vect2[d]]%2!=0)or(hashing[vect2[d]]%2!=0)){
    test=false;break;}
   if(((val/vect2[d])==vect2[d])and(hashing[vect2[d]]%4!=0)){test=false;break;}}
   
   
  if(test ==true)break;
  } 
 if(test==true)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 
 
 }
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
return 0;}