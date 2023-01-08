#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
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
 long long int n,x,m,t,l,r;
 cin>>t;
 while(t--){
 
 cin>>n>>x>>m;
 vector<pair<long long int,long long int>>res;
  for(long long int i(0);i<m;i++){
   cin>>l>>r;
   if(res.size()==0){
   if((x>=l)and(x<=r)){
    res.push_back(make_pair(l,r));}}
   else{
    if((x>=l)and(x<=r)){
    res.push_back(make_pair(l,r));}
    else{
   for(auto v:res){
    if(((v.first<=l)and(not(v.second<l)))or((v.first>=l)and(not(r<v.first)))){
     res.push_back(make_pair(l,r));break;}}}}
   }
  vector<pair<long long int,long long int>>res2;
  if(res.size()==0){
      cout<<1<<endl;
  }
  else{
  res2=merge(res);
  long long int som=0;
  for(auto v:res2){
   som+=(v.second-v.first+1);}
  cout<<som<<endl;}
  }
  
  
  
 
 
  
  
 
 
 
 
 
 
    
return 0;} 