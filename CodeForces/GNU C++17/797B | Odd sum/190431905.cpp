#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int ans=1e4;
int main()
{
 fast;
 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 vector<long long int>res;
 long long int som=0;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  }
  for(long long int i(0);i<n;i++){
 if((abs(vect[i])%2==0)and(vect[i]>=0)){
   som+=vect[i];}
 else if(abs(vect[i])%2==1){
  res.push_back(vect[i]);}}
sort(res.begin(),res.end());
long long int j=res.size()-1;
while((j>=0)and(res[j]>0)){
 som+=res[j];
 j--;}
if(j==(res.size()-1)){
 som+=res[res.size()-1];}
if(abs(som)%2==0){if(j==-1){ som-=res[j+1];} else if(res[j+1]>abs(res[j])){som+=res[j];}
 else som-=res[j+1];}
cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}