#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast; 
 long long int n,k;
 string s;
 cin>>n>>k;
 cin>>s;
 long long int som=0;
 long long int j=0;
 long long int i=0;
 long long int ans=0;
 while(j<n){
  if(s[j]=='a'){
   som++;}
 if(som<=k){
  ans=max(ans,j-i+1);}
 else if(som>k){
  while((i<=j)and(som>k)){
   if(s[i]=='a')som--;
   i++;
   }
  if(i>j){
   j++;som=0;continue;}}
 j++;}
 j=0;
 i=0;
 som=0;
 while(j<n){
  if(s[j]=='b'){
   som++;}
 if(som<=k){
  ans=max(ans,j-i+1);}
 else if(som>k){
  while((i<=j)and(som>k)){
   if(s[i]=='b')som--;
   i++;
   }
  if(i>j){
   j++;som=0;continue;}}
 j++;}
cout<<ans<<endl;
 
    
    
return 0;}