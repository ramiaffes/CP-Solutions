#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
map<pair<long long int,long long int>,bool>vis;
map<pair<long long int,long long int>,bool>vis1;
long long int som=0;map<pair<long long int,long long int>,long long int>m1;
set<pair<long long int,long long int>>res;
bool test=false;
 
int main()
{
 fast; 
 string s;
 long long int n,t;
 
    cin>>t;
    while(t--){
  cin>>n;
  if((n/6)<1){
   if(n%4==0){
    
    cout<<(n/4)<<" ";}
   else {cout<<-1<<endl;continue;}}
  else if(n%6==0)cout<<(n/6)<<" ";
  else if((n%6==2)and(n/6>=1))cout<<(n/6-1+2)<<" ";
  else if(n%6==4)cout<<(n/6+1)<<" ";
  else {cout<<-1<<endl;continue;}
  if(n%4==0)
  cout<<(n/4)<<endl;
  else if((n%4==2)and(n/4>=1))cout<<(n/4)<<endl;
  else cout<<-1<<endl;
  }
 
 
    
return 0;} 