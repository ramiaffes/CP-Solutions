#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
map<long long int,bool>vis;
map<long long int,bool>res1;
map<long long int,bool>res2;vector<long long int>vect(N);
long long int ans=1e9;
long long int som=0;
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
int main()
{
 fast; 
 long long int n,x,y,val1,val2;
 cin>>n;
 char cr,cr2;
 vector<string>res(n);
 map<string,long long int>hashing;
 map<string,pair<long long int,long long int>>hashing2;
 string s;
 for(long long int i(0);i<n;i++){
  cin>>res[i];
    }
 for(long long int i(0);i<(n*(n-1))/2;i++){
  cin>>s;
  vector<string>s1;
  tokenize(s,'-',s1);
  cin>>val1>>cr2>>val2;
  if(val1==val2){
   hashing[s1[0]]++;
   hashing[s1[1]]++;}
  else if(val1<val2){
   hashing[s1[1]]+=3;
   }
  else{
   hashing[s1[0]]+=3;}
  hashing2[s1[0]].first+=val1;
  hashing2[s1[1]].second+=val1;
  hashing2[s1[1]].first+=val2;
  hashing2[s1[0]].second+=val2;
  }
 long long int ans=0;
 long long int val=0;
 long long int ans1=0;
 long long int ans3=0;
  for(long long int j(0);j<(n);j++){
   ans1=(hashing2[res[j]].first-hashing2[res[j]].second);
   ans3=hashing2[res[j]].first;
   ans=hashing[res[j]];
   val=j;
   for(long long int i(j);i<n;i++){
    if(ans>hashing[res[i]])continue;
    else if(ans==hashing[res[i]]){
     if(ans1>(hashing2[res[i]].first-hashing2[res[i]].second)){
      continue;
      }
     else if(ans1==(hashing2[res[i]].first-hashing2[res[i]].second)){
      if(ans3>(hashing2[res[i]].first)){
      continue;
      }
     else{
      val=i;ans3=hashing2[res[i]].first;}
      
      }
     else{val=i;ans1=hashing2[res[i]].first-hashing2[res[i]].second;ans3=hashing2[res[i]].first;}
     }
    else {ans=max(ans,hashing[res[i]]);val=i;ans1=hashing2[res[i]].first-hashing2[res[i]].second;ans3=hashing2[res[i]].first;}
    }
   swap(res[j],res[val]);}
  sort(res.begin(),res.begin()+n/2);
  for(long long int i(0);i<(n/2);i++){
   cout<<res[i]<<endl;}
 
 
 
  
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}