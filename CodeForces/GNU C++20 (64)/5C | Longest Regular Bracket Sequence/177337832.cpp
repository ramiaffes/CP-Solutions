#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 vector<pair<long long int,long long int>> merge(vector<pair<long long int,long long int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        long long int ans0=intervals[0].first;
        long long int ans1=intervals[0].second;
        vector<pair<long long int,long long int>>res;
         for(long long int i=0;i<intervals.size();i++){
            if(not((intervals[i].second<ans0)or(ans1<intervals[i].first))){
                ans0=min(ans0,intervals[i].first);
                ans1=max(ans1,intervals[i].second);
            }
            else{
         
                pair<long long int,long long int>var;
                var.first=ans0;
                var.second=ans1;
                res.push_back(var);   
            ans0=intervals[i].first;
         ans1=intervals[i].second;
            }
        }
   pair<long long int,long long int>var;
                var.first=ans0;
                var.second=ans1;
                res.push_back(var);
   
    return res;
    }
int main()
{
 fast;
 long long int n,k,q,a,b;
 string s;
 cin>>s;
 deque<long long int>vect;
 vector<pair<long long int,long long int>>res;
 for(long long int i(0);i<s.length();i++){
  if(s[i]=='('){
   vect.push_back(i);
  }
 else if(not(vect.empty())){
  res.push_back(make_pair(vect[vect.size()-1],i));
  vect.pop_back();
  
  
  }}
if(res.empty()){
 cout<<0<<" "<<1<<endl;}
else{
vector<pair<long long int,long long int>>res1;
 
res1=merge(res);
for(long long int i(0);i<(res1.size()-1);i++){
 if(res1[i+1].first==res1[i].second+1){
  res1[i].second++;}}
vector<pair<long long int,long long int>>res2;
res2=merge(res1);
 
long long int ans=0;
map<long long int,long long int>hashing;
for(auto v:res2){
 ans=max(ans,v.second-v.first+1);
 hashing[v.second-v.first+1]++;}
if(ans==0)cout<<0<<" "<<1<<endl;
else
cout<<ans<<" "<<hashing[ans]<<endl;}
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}