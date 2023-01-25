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
long long int n,a,b;
cin>>n>>a>>b;
long long int ans=0;
for(long long i(1);i<(n);i++){
 vector<long long int>vect(i);
 vector<long long int>vect1(n-i);
 long long int som1=0;
 while(som1<a){
  for(long long int j(0);j<vect.size();j++){
   vect[j]++;
   som1++;
   if(som1==a)break;
   }}
 long long int som2=0;
 while(som2<b){
  for(long long int j(0);j<vect1.size();j++){
   vect1[j]++;
   som2++;
   if(som2==b)break;
   }}
 sort(vect.begin(),vect.end());
 sort(vect1.begin(),vect1.end());
 if((vect[0]!=0)and(vect1[0]!=0)){
 ans=max(ans,min(vect[0],vect1[0]));}
 }
cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}