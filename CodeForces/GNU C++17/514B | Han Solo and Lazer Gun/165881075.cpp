#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
map<long long int,bool>vis;
map<long long int,bool>res1;
map<long long int,bool>res2;vector<long long int>vect(N);
void tokenize(string const &str, const char delim,
            vector<string> &out)
{
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != std::string::npos)
    {
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }}
long long int ans=1e9;
long long int som=0;
int main()
{
 fast; 
 long long int n,s,x,y,val1,val2;
 cin>>n>>x>>y;
 vector<pair<long long int,long long int>>vect(n);
 map<pair<long long int,long long int>,long long int>vis;
 map<long long int,long long int>vis1;
 for(long long int i(0);i<n;i++){
  cin>>vect[i].first>>vect[i].second;
  long double val=vect[i].second-y;
  if((vect[i].first-x)!=0){val/=(vect[i].first-x);vis[make_pair(val*1e5,y*1e5-val*1e5*x)]++;}
  else{vis1[x*1e5]++;}
  
     
 }
 cout<<(vis.size()+vis1.size())<<endl;
  
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}