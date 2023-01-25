#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
bool isprime(long long int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;}
int main()
{
 fast; 
 long long int  t,k;
 string n;
 cin>>t;
 while(t--){
 cin>>k;
 vector<long long int>vect(k);
 vector<long long int>vec;
 cin>>n;
 string n2=n;
 sort(n.begin(),n.end());
 if(n[0]=='1'){ cout<<1<<endl;
 cout<<1<<endl;}
 else  if(k>=10){
  bool test=true;
  for(long long int i(0);i<k;i++){
   if(isprime((n[i]-'0'))==false){
    cout<<1<<endl;
    cout<<n[i]<<endl;
    test=false;
    break;
    }
   }
  if(test==true){
  cout<<2<<endl;
  long long int i=0;
  while((i<(k-1))and(n[i]!=n[i+1])){
  i++;}
  string s(n.begin()+i,n.begin()+i+2);
  cout<<(s)<<endl;}
  }
 else{
  long long int n1=stoll(n2);
 long long int i=0;
 while(n1!=0){
  vect[i]=n1%10;
  i++;n1/=10;}
 long long int tot=1<<k;
 long long int som=0;
 for(long long int mask=0;mask<tot;mask++){
  som=0;
  long long int p=1;
  for(long long int i=(0);i<k;i++){
   long long int f=1<<i;
   if(mask&f){
    som+=p*vect[i];
    p*=10;
    }
   
   }
   if(som!=0){
   vec.push_back(som);}
   }
 sort(vec.begin(),vec.end());
    long long int j=0;  
   while((j<vec.size())and(isprime(vec[j])==true)){
  j++;}
 string s=to_string(vec[j]);
 cout<<s.length()<<endl;
 cout<<s<<endl;
 }
  
  
  
  
  }
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}