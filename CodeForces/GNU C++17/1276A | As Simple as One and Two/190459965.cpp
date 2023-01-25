#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long  int t;
 string st;
 cin>>t;
 while(t--){
  cin>>st;
  long long int j=0;
  long long int d=0;
  long long int i=0;
  long long int n=st.length();
  bool test=false;
  vector<long long int>s1;
  vector<long long int>s2;
  vector<long long int>s3;
  vector<long long int>s4;
  vector<long long int>s;
  long long int som=0;
  while(i<st.length()){
   if(st[i]=='w'){
    if(test==true){
     som+=1;
     s.insert(s.end(),(s2[0]-1));
    s1.clear();s2.clear();
    test=false;}
     j=i-1;
     d=i+1;
    while((j>=0)and(st[j]=='t')){
     s1.push_back(j+1);
     j--;}
    while((d<n)and(st[d]=='o')){
     s2.push_back(d+1);
     d++;}
   if(s1.empty()or(s2.empty())){
    s2.clear();
    s1.clear();
    i=d;
    continue;}
   else if(d==n){
    som+=1;
    s.insert(s.end(),(s2[0]-1));
    s1.clear();s2.clear();
    test=false;
    break;}
   else{
    i=d;test=true;}
   }
   else if(st[i]=='n'){
     j=i-1;
     d=i+1;
    while((j>=0)and(st[j]=='o')){
     s3.push_back(j+1);
     j--;}
    while((d<n)and(st[d]=='e')){
     s4.push_back(d+1);
     d++;}
   if(s3.empty()or(s4.empty())){
    s3.clear();
    s4.clear();
    i=d;
    if(test==true){som+=1;
    s.insert(s.end(),(s2[0]-1));
    s1.clear();s2.clear();}
    test=false;
    continue;}
   else if (test==true){
    if(s3.size()==1){
     som+=1;
     s.insert(s.end(),(s3[0]));
     i=s3[0]+1;
     s3.clear();s1.clear();s4.clear();s2.clear();}
    else{
    som+=2;
    s.insert(s.end(),(s2[0]-1));
    s.insert(s.end(),(s4[0]-1));i=s4[0];
    s1.clear();s2.clear();s4.clear();s3.clear();
    test=false;
    }}
   else{
     som+=1;
     s.insert(s.end(),s4[0]-1);
    s3.clear();s4.clear();}
    i=d;test=false;
    }
   else if(test==true){
    som+=1;
    s.insert(s.end(),(s2[0]-1));
    s1.clear();s2.clear();
    s2.clear();s1.clear();
    test=false;
    i++;}
   else{i++;}
  
 }
  cout<<som<<endl;
  for(long long int i(0);i<s.size();i++)cout<<s[i]<<" ";
  cout<<endl;
  
  
  
  }
 
 
 
  
 
  
  
  
  
  
  
 
 
 
  
  
  
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}