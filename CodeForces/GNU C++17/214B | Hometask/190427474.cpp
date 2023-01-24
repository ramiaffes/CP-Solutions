#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
int main()
{
 fast;
 long long int q,n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 if(find(vect.begin(),vect.end(),0)==vect.end()){
  cout<<-1<<endl;}
 else{
  long long int som=0;
  for(long long int i(0);i<n;i++){
   som+=vect[i];}
  if(som%3==0){
   sort(vect.begin(),vect.end());
   if(vect[n-1]==0){
    cout<<0<<endl;}
   else{
    string res;
    for(long long int i(vect.size()-1);i>=0;i--){
     string var(1,vect[i]+'0');
     res.append(var);
     }
    cout<<res<<endl;}}
  else if(som%3==1){
   bool test=false;
   for(long long int i(1);i<=9;i++){
    if((i%3==1)and(find(vect.begin(),vect.end(),i)!=vect.end())){
     auto var=find(vect.begin(),vect.end(),i);
     vect.erase(var);test=true;break;}}
   if(test==false){
    for(long long int i(1);i<=9;i++){
    if((i%3==2)and(find(vect.begin(),vect.end(),i)!=vect.end())){
     
     auto var=find(vect.begin(),vect.end(),i);
     vect.erase(var);break;}}
    for(long long int i(1);i<=9;i++){
    if((i%3==2)and(find(vect.begin(),vect.end(),i)!=vect.end())){
     auto var=find(vect.begin(),vect.end(),i);
     vect.erase(var);break;}}
    }
   string res;
   sort(vect.begin(),vect.end());
    if(vect[vect.size()-1]==0){cout<<0<<endl;}
    else{
   for(long long int i(vect.size()-1);i>=0;i--){
     string var(1,vect[i]+'0');
     res.append(var);
     }
    cout<<res<<endl;}
   }
  else{
   bool test=false;
   for(long long int i(1);i<=9;i++){
    if((i%3==2)and(find(vect.begin(),vect.end(),i)!=vect.end())){
     auto var=find(vect.begin(),vect.end(),i);
     vect.erase(var);test=true;break;}}
   if(test==false){
    for(long long int i(1);i<=9;i++){
    if((i%3==1)and(find(vect.begin(),vect.end(),i)!=vect.end())){
     auto var=find(vect.begin(),vect.end(),i);
     vect.erase(var);break;}}
    for(long long int i(1);i<=9;i++){
    if((i%3==1)and(find(vect.begin(),vect.end(),i)!=vect.end())){
     auto var=find(vect.begin(),vect.end(),i);
     vect.erase(var);break;}}
    }
   string res;
   sort(vect.begin(),vect.end());
   if(vect[vect.size()-1]==0){cout<<0<<endl;}
   else{for(long long int i(vect.size()-1);i>=0;i--){
     string var(1,vect[i]+'0');
     res.append(var);
     }
    cout<<res<<endl;}}
  }
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}