#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
int main()
{
 fast; 
 string s;
 long long int n,d,h;
    cin>>n;
    vector<long long int>vect(n);
    for(long long int i(0);i<n;i++)cin>>vect[i];
    map<long long int,long long int>val;
    map<long long int,long long int>val1;
    vector<long long int>res;
     vector<long long int>res1;
    for(long long int i(0);i<n;i++)val[vect[i]]=1e9;
    for(long long int i(0);i<n;i++){
  val[vect[i]]=min(val[vect[i]],i+1);
  val1[vect[i]]=max(val1[vect[i]],i+1);}
 for(auto v:val){
  res.push_back(v.second);}
    for(auto v:val1){
  res1.push_back(v.second);}
 sort(res1.begin(),res1.end());
 long long int som=0;
 for(auto v:res){
  auto it=upper_bound(res1.begin(),res1.end(),v);
  long long int val=res1.size()-(it-res1.begin());
  som+=val;
  }
 cout<<som<<endl;
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}