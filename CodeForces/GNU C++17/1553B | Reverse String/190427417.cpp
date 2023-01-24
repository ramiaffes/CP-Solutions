#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
bool test1=false;
void func(string s,string t,long long int i ,long long int j,long long int d,string s1){
 if(test1==true)return;
 if(s1.length()>t.length())return;
 if(t.substr(0,s1.length())!=s1)return;
 if((t.substr(0,s1.length())==s1)and(t.length()==s1.length())){test1=true;return;}
 string s2=s1;
 if(j==d){
  if(d>=1){
  string var(1,s[d-1]);
  s1.append(var);
  func(s,t,i,j,d-1,s1);}
  if(j<(s.length()-1)){
  string var1(1,s[d+1]);
  s2.append(var1);
  func(s,t,i,j+1,d+1,s2);}}
 else{
  if(d>=1){
   string var(1,s[d-1]);
  s1.append(var);
  func(s,t,i,j,d-1,s1);}}
 }
int main()
{
 fast;
 string s,t;
 long long int q;
 cin>>q;
 while(q--){
  test1=false;
  cin>>s;
  cin>>t;
  for(long long int i(0);i<s.length();i++){
   if(s[i]==t[0]){
    string var23(1,s[i]);
    func(s,t,i,i,i,var23);}
   if(test1==true)break;}
  if(test1==true)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}