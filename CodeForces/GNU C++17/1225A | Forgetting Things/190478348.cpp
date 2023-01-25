#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long  int  da,db;
 
 
 cin>>da>>db;
 if((da==9)and(db==1)){cout<<9<<" "<<10<<endl;}
 else if((da>db)or((db>(da+1)))){cout<<-1<<endl;}
 else if(db==da){
  cout<<(da*10)<<" "<<(db*10+1)<<endl;}
 else{
  cout<<(da*10+9)<<" "<<(db*10)<<endl;}
 
 
 
 
 
 
 
return 0;}