#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
 
int main()
{
 
 fast; 
 long long int t;
 cin>>t;
 int n;
 
 while(t--){
  cin>>n;
  long long int som1(0);
  long long int som2(0);
  long long int som3(0);
  long long int som4(0);
  long long int p(1);
  vecteur vect(n),vects1(n),vects2(n);
  for (int i(0);i<n;i++){
   cin>>vect[i];
   p*=vect[i];
   }
  if (n==5){
   cout<<p<<endl;}
   else{
  
  sort(vect.begin(),vect.end());
  auto it1=copy_if(vect.begin(),vect.end(),vects1.begin(),[](int i){return i<0;});
  vects1.resize(distance(vects1.begin(),it1));
  auto it2=copy_if(vect.begin(),vect.end(),vects2.begin(),[](int i){return i>=0;});
  vects2.resize(distance(vects2.begin(),it2));
  int res1=vects1.size();
  int res2=vects2.size();
  if (res1>=5){
   som1=vects1[res1-1]*vects1[res1-2]*vects1[res1-3]*vects1[res1-4]*vects1[res1-5];
   }
  if (res2>=5){
   som2=vects2[res2-1]*vects2[res2-2]*vects2[res2-3]*vects2[res2-4]*vects2[res2-5];
  }
  if ((res2>=3) and (res1>=2)){
   som3=vects1[0]*vects1[1]*vects2[res2-1]*vects2[res2-2]*vects2[res2-3];
  }
  if ((res2>=1) and (res1>=4)){
   som4=vects2[res2-1]*vects1[0]*vects1[1]*vects1[2]*vects1[3];
  }
  if (res2==0){
   cout<<som1<<endl;}
  else{
   cout<<max(max(som3,som4),som2)<<endl;}}}
  
  
 
  
  
  
  
  
 
 
 
 
 
  
  
  
 
 
 
 return 0;
}