#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
map<long long int, bool>vis;
map<long long int,vector<long long int>>adj;
 
int main()
{
fast;
long long int d,sumtime,maxtime,mintime;
long long int som1=0;
long long int som2=0;
 
cin>>d>>sumtime;vector<long long int>result(d);
vector<long long int>result1(d);
for(long long int i(0);i<d;i++){
 cin>>mintime>>maxtime;
 result[i]=mintime;
 result1[i]=maxtime;
 som1+=maxtime;
 som2+=mintime;}
if((sumtime>som1)or(som2>sumtime)){
 cout<<"NO"<<endl;}
else{
 
 while(som2<sumtime){
  for(long long int i(0);i<d;i++){
   if(result[i]<result1[i]){
    result[i]++;
    som2++;
    if(som2==sumtime)break;}}
  }
 cout<<"YES"<<endl;
 for(auto v:result)
 cout<<v<<" ";}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}