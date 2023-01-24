#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>dp;
int main()
{
 fast;
 
 long long int m,s;
 cin>>m;
 cin>>s;
 if((m==1)and(s==0)){
  cout<<0<<" "<<0<<endl;}
else if((s>9*m)or(s==0)){
  cout<<-1<<" "<<-1<<endl;}
else{
 vector<long long int>res(m);
 vector<long long int>res1(m);
 res[0]=1;
 res1[0]=1;
 long long int som=0;
 long long int i=m-1;
 while(som<(s-1)){
  if(res[i]<9){
   res[i]++;
   som++;
   continue;}
  else{
   i--;}}
 i=0;
som=0;
 while(som<(s-1)){
  if(res1[i]<9){
   res1[i]++;
   som++;
   continue;}
  else{
   i++;}}
 string valmax;
 string valmin;
 for(long long int i(0);i<m;i++){
 char var=res1[i]+'0';
 string var1(1,var);
 valmax.append(var1);
 }
 for(long long int i(0);i<m;i++){
 char var=res[i]+'0';
 string var1(1,var);
 valmin.append(var1);
 }
 cout<<valmin<<" "<<valmax<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}