#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<long long int ,vector<long long int>>adj;
long long int factorial(long long int d){
 if(d<=1)return 1;
 return  d*factorial(d-1);
 }
int main()
{
 fast;
 long  long int n,t;
 cin>>t;
 while(t--){
 cin>>n;
 long long int som26=1;
 long long int som25=1;
 while(som26<n){
  som26*=som25;
  som25++;}
 long long int ans=1e9;
  long long int tot1=1<<som25;
  long long int som24=0;
  long long int valeur1=0;
  for(long long int mask1=0;mask1<tot1;mask1++){
   som24=0;
   valeur1=0;
  for(long long int i1=0;i1<som25;i1++){
   long long int f1=1<<i1;
   if(mask1&f1){
    som24+=factorial(i1);valeur1++;
    }
   if(som24>n)break;
   }
   long long int val=(n-som24);
   if(val<0)continue;
   else if(val==0){
    ans=min(ans,valeur1);}
  else{ 
   long long int som2=0;
   while(val!=0){
    if(val%2==1){
    som2++;}
    val/=2;
    }
   ans=min(ans,valeur1+som2);
    }
   } 
if(ans==(1e9))cout<<-1<<endl;
else cout<<ans<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}