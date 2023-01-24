#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int ans=1e4;
map<long long int ,long long int>hashing;
int main()
{
 fast;
 
 long long int a,b,c,m,r;
 string h;
 cin>>a>>b>>c;
 cin>>m;
 vector<pair<long long int,string>>vect(m);
 for(long long int i(0);i<m;i++){cin>>r>>h;vect[i]=make_pair(r,h);}
 sort(vect.begin(),vect.end());
 long long int som=0;
 long long int som1=0;
 for(long long int i(0);i<m;i++){
  if(vect[i].second=="USB"){
   if(a>0){
   som++;
   som1+=vect[i].first;
   a--;}
   else if(c>0){
    som++;
     som1+=vect[i].first;
    c--;}}
 else{
  if(b>0){
   som++;
    som1+=vect[i].first;
   b--;}
  else if(c>0){
   som++;
   som1+=vect[i].first;
   c--;}}
    }
  cout<<som<<" "<<som1<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}