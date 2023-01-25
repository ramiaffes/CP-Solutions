#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 vector<string >vect1(n);
 long long int ans1=1e7;
 long long int ans2=1e7;
 long long int ans3=1e7;
 long long int ans4=1e7;
 long long int ans5=1e7;
 long long int ans6=1e7;
 long long int ans7=1e7;
 for(long long int i(0);i<n;i++){
  cin>>vect[i]>>vect1[i];sort(vect1[i].begin(),vect1[i].end());
  if(vect1[i]=="ABC"){
   ans1=min(ans1,vect[i]);}
  else if(vect1[i]=="AB"){
   ans2=min(ans2,vect[i]);}
  else if(vect1[i]=="AC")ans3=min(ans3,vect[i]);
  else if(vect1[i]=="BC")ans4=min(ans4,vect[i]);
  else if(vect1[i]=="C")ans5=min(ans5,vect[i]);
  else if(vect1[i]=="B")ans6=min(ans6,vect[i]);
  else if(vect1[i]=="A")ans7=min(ans7,vect[i]);}
  long long int res=min(ans2+ans4,min(ans2+ans3,min(ans3+ans4,min(ans1,min((ans2+ans5),min((ans3+ans6),min((ans4+ans7),(ans5+ans6+ans7))))))));
  if(res==1e7)cout<<-1<<endl;
  else cout<<res<<endl;
  
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}