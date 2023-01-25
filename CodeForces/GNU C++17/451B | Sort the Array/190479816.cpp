#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  n;
  cin>>n;
  unordered_map<long long int, long long int> m;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   }
  vector<long long int>result(vect.begin(),vect.end());
  sort(result.begin(),result.end());
  for(long long int i(0);i<n;i++){
   m[result[i]]=(i+1);}
  if(n==1){
   cout<<"yes"<<endl;
   cout<<1<<" "<<1<<endl;}
  else{
  long long int i=0;
  while((i<(n-1))and(m[vect[i]]==(i+1))){
   i++;}
  if(i==(n-1)){
   cout<<"yes"<<endl;
   cout<<1<<" "<<1<<endl;}
  
        else{
   long long int start=i;
   long long int end;
   bool test=true;
   long long int j=n-1;
   while((j>=1)and(m[vect[j]]==(j+1))){
   j--;}
   end=j;
   long long int d;
   for(d=start;d<(end);d++){
    if(m[vect[d]]!=(m[vect[d+1]]+1)){
     test=false;break;}}
   if(test==false){
    cout<<"no"<<endl;}
   else{
    cout<<"yes"<<endl;
    cout<<(start+1)<<" "<<(end+1)<<endl;}
   
 
}
 
 
 
 
 
 
 
 
 
  
  
  
 }
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}