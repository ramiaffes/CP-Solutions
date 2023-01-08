#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
void remove(vector<long long int> &v,long long int target)
{
    v.erase(remove(v.begin(), v.end(), target), v.end());
}
set<pair<long long int,long long int>>res;
bool test=false;
 
int main()
{
 fast; 
 string s;
 long long int n;
 cin>>n;
 if((((n*(n+1))/2)%2)==0){
  cout<<0<<endl;
  vector<long long int>res;
  long long int i=1;
  while((i*(i+1)/2)<(n*(n+1)/4)){
   res.push_back(i);
   i++;}
  res.push_back(i);
  remove(res,(i*(i+1)/2)-(n*(n+1)/4));
  cout<<res.size()<<" ";
  for(auto v:res)cout<<v<<" ";}
 else{
  cout<<1<<endl;
  vector<long long int>res;
  long long int i=1;
  while((i*(i+1)/2)<((n*(n+1)/2-1)/2)){
   res.push_back(i);
   i++;}
  res.push_back(i);
  remove(res,(i*(i+1)/2)-((n*(n+1)/2-1)/2));
  cout<<res.size()<<" ";
  for(auto v:res)cout<<v<<" ";}
 
 
 
    
    
 
    
    
 
    
    
return 0;} 