#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,long long int>hashing;
bool cmp(pair<char, long long int> a,
         pair<char, long long int> b)
{
    return a.second < b.second;
}
  
int main()
{
 fast;
 long long int k=0;
string a,b;
cin>>a;
cin>>k;
for(long long int i(0);i<a.length();i++){
 hashing[a[i]]++;}
long long int val=hashing.size();
vector<char >res;
vector<pair<char,long long int>>vect;
for(auto it:hashing){
 vect.push_back(it);}
sort(vect.begin(), vect.end(), cmp);
long long int i=0;
while((i<vect.size())and(k>0)){
 res.push_back(vect[i].first);
 k-=vect[i].second;i++;
 }
if(k<0)res.pop_back();
cout<<(val-res.size())<<endl;
for(auto v:res){
   a.erase(remove(a.begin(), a.end(), v), a.end()); }
cout<<a<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}