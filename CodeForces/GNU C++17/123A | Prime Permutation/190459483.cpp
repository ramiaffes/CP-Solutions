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
 string s;
 cin>>s;
 long long int ans=0;
 long long int som=0;
 map<long long int,long long int>mymap;
 for(long long int i(0);i<s.length();i++){
  mymap[s[i]]++;
  ans=max(ans,mymap[s[i]]);}
 for(long long int p(3);p<=s.length();p++){
  if((isprime(p)==false)or(s.length()/p>1))som++;}
 if(ans>=(som+1)){
  cout<<"YES"<<endl;
  string res(s.length(),' ');
  long long int i=0;
  for(i=0;i<s.length();i++){
   if(mymap[s[i]]==ans)break;}
 for(long long int p(2);p<=s.length();p++){
  if((isprime(p)==false)or(s.length()/p>1)or(p==2)){
   res[p-1]=s[i];
   mymap[s[i]]--;
   }}
 string ch;
 for(auto it=mymap.begin();it!=mymap.end();it++){
  string cm(it->second,it->first);
  ch.append(cm);}
 long long int jm=0;
 for(long long int p(1);p<=s.length();p++){
  if((p==1)or(!((isprime(p)==false)or(s.length()/p>1)or(p==2)))){
   res[p-1]=ch[jm];
   jm++;
   }}
 cout<<res<<endl;
  }
 else cout<<"NO"<<endl;
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}