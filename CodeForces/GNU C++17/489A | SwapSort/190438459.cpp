#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,bool>vis;
map<long long int ,long long int >adj;
long long int som=0;
int main()
{
fast;
long long int n,k,x;
cin>>n;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++){cin>>vect[i];}
vector<long long int>vect1(vect.begin(),vect.end());
vector<pair<long long int ,long long int>>res;
sort(vect1.begin(),vect1.end());
for(long long int i(0);i<n;i++){
 if(vect[i]!=vect1[i]){
 auto it=find(vect.begin()+i,vect.end(),vect1[i]);
 res.push_back(make_pair(it-vect.begin(),i));
 swap(vect[it-vect.begin()],vect[i]);}}
cout<<res.size()<<endl;
for(auto v:res){
 cout<<v.first<<" "<<v.second<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}