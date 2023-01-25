#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int> parent; 
const long int N=1e4;
map<pair<long long int,long long int>,bool>mymap;bool test=true;
  set<pair<pair<long long int,long long int>,pair<long long int,long long int>>>se1;
int main()
{
 fast;
 long long int n,q,r,c;long long int val;
 cin>>n>>q;
 for(long long int i(0);i<q;i++){
  cin>>r>>c;
  
  mymap[make_pair(r,c)]=1-mymap[make_pair(r,c)];
   if(mymap[make_pair(r,c)]==1){
   if(r==1){
    if(mymap[make_pair(r+1,c)]==1){se1.insert(make_pair(make_pair(r,c),make_pair(r+1,c)));test=false;}
    if(mymap[make_pair(r+1,c+1)]==1){se1.insert(make_pair(make_pair(r,c),make_pair(r+1,c+1)));
      test=false;}
     if(mymap[make_pair(r+1,c-1)]==1){
      se1.insert(make_pair(make_pair(r+1,c-1),make_pair(r,c)));
      test=false;}
    }
   else{
    if(mymap[make_pair(r-1,c)]==1){se1.insert(make_pair(make_pair(r-1,c),make_pair(r,c)));test=false;}
    if(mymap[make_pair(r-1,c+1)]==1){
     se1.insert(make_pair(make_pair(r,c),make_pair(r-1,c+1)));
      test=false;}
     if(mymap[make_pair(r-1,c-1)]==1){
      se1.insert(make_pair(make_pair(r-1,c-1),make_pair(r,c)));
      test=false;}}}
   if(mymap[make_pair(r,c)]==0){
    if(r==1){
   se1.erase(make_pair(make_pair(r,c),make_pair(r+1,c+1)));
   se1.erase(make_pair(make_pair(r+1,c-1),make_pair(r,c)));
   se1.erase(make_pair(make_pair(r,c),make_pair(r+1,c)));}
   else{
   se1.erase(make_pair(make_pair(r-1,c-1),make_pair(r,c)));
   val=se1.erase(make_pair(make_pair(r,c),make_pair(r-1,c+1)));
   se1.erase(make_pair(make_pair(r-1,c),make_pair(r,c)));
   }
  if(se1.empty()==true)test=true;
  }
   
  if(test==true)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 }
 
 
  
 
 
 
 
 
return 0;}