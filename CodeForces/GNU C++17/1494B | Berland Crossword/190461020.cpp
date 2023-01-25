#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int n,t,u,r,d,l;
 cin>>t;
 while(t--){
  cin>>n>>u>>r>>d>>l;
  long long int tot=1<<(4);
  long long int val=0;
  bool test=false;
 for(long long int mask=0;mask<tot;mask++){
  for(long long int som1(max(val,(u-2)));som1<=min(u,n-2);som1++){
   for(long long int som2(max(val,(r-2)));som2<=min(r,n-2);som2++){
    for(long long int som3(max(val,(d-2)));som3<=min(d,n-2);som3++){
     for(long long int som4(max(val,(l-2)));som4<=min(l,n-2);som4++){
  long long int somprim1=som1;
  long long int somprim2=som2;
  long long int somprim3=som3;
  long long int somprim4=som4;
  long long int f=1<<0;
  if(mask&f){
   somprim1++;
   somprim2++; 
  }
   f=1<<1;
  if(mask&f){
   somprim2++;
   somprim3++; 
  }
   f=1<<2;
  if(mask&f){
   somprim3++;
   somprim4++; 
  }
   f=1<<3;
  if(mask&f){
   somprim1++;
   somprim4++; 
  }
  if((somprim1==u)and(somprim2==r)and(somprim3==d)and(somprim4==l)){test=true;break;}
   }if(test==true)break;}if(test==true)break;}if(test==true)break;}if(test==true)break;}
  
  if(test==true)cout<<"YES"<<endl;
  else cout<<"NO"<<endl; 
   
  }
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}